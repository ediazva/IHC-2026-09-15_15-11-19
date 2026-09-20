using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Generador de laberintos con el algoritmo de backtracking recursivo
/// (recursive backtracker / DFS). Produce una cuadrícula NxN de celdas
/// con pasillos totalmente conectados y siempre resoluble.
///
/// El resultado es una rejilla de "muros" en una malla de (N+1)x(N+1) líneas:
///  * hWall[r, c]  (r 0..N, c 0..N-1): muro horizontal, separa cell(r-1,c) de cell(r,c)
///  * vWall[r, c]  (r 0..N-1, c 0..N): muro vertical,   separa cell(r,c-1)  de cell(r,c)
/// Todas las aristas exteriores quedan como muro.
///
/// Nota: no instancia nada; solo devuelve la topología para que el módulo
/// (MazeModule) construya la geometría con colliders.
/// </summary>
public static class MazeSpiralGenerator
{
    public struct Cell
    {
        public int r; // fila, 0 = fila inferior, N-1 = fila superior
        public int c; // columna, 0 = izquierda, N-1 = derecha
    }

    public struct MazeData
    {
        public int n;
        public Cell start;
        public Cell goal;
        public List<Cell> holes;
        public bool[,] vWall;
        public bool[,] hWall;
    }

    public static MazeData Generate(int n, int seed)
    {
        if (n < 2) n = 2;

        MazeData data = new MazeData
        {
            n = n,
            holes = new List<Cell>(),
            hWall = new bool[n + 1, n],
            vWall = new bool[n, n + 1],
        };

        for (int r = 0; r <= n; r++)
            for (int c = 0; c < n; c++)
                data.hWall[r, c] = true;
        for (int r = 0; r < n; r++)
            for (int c = 0; c <= n; c++)
                data.vWall[r, c] = true;

        var rng = new System.Random(seed);

        // Celda inicial en la FILA SUPERIOR (donde queda el hueco de inserción de
        // la bolita): esquina, centro u otra esquina, elegida por la semilla.
        int cStart = rng.Next(0, 3) switch
        {
            0 => 0,
            1 => n - 1,
            _ => (n - 1) / 2,
        };
        data.start = new Cell { r = n - 1, c = cStart };

        // Backtracking recursivo (iterativo con pila explícita).
        bool[,] visited = new bool[n, n];
        Stack<Cell> stack = new Stack<Cell>();
        visited[data.start.r, data.start.c] = true;
        stack.Push(data.start);

        Cell[] dirs =
        {
            new Cell { r = 1, c = 0 },  // arriba
            new Cell { r = -1, c = 0 }, // abajo
            new Cell { r = 0, c = 1 },  // derecha
            new Cell { r = 0, c = -1 }, // izquierda
        };

        while (stack.Count > 0)
        {
            Cell cur = stack.Peek();
            List<int> open = new List<int>();
            for (int d = 0; d < dirs.Length; d++)
            {
                int nr = cur.r + dirs[d].r;
                int nc = cur.c + dirs[d].c;
                if (nr < 0 || nr >= n || nc < 0 || nc >= n) continue;
                if (visited[nr, nc]) continue;
                open.Add(d);
            }

            if (open.Count == 0)
            {
                stack.Pop();
                continue;
            }

            int pick = open[rng.Next(open.Count)];
            Cell next = new Cell { r = cur.r + dirs[pick].r, c = cur.c + dirs[pick].c };
            Carve(data, cur, next);
            visited[next.r, next.c] = true;
            stack.Push(next);
        }

        // Meta: la celda más lejana según BFS por los pasillos reales. Así el
        // laberinto es siempre resoluble y el recorrido no es trivial.
        data.goal = FarthestCell(data, rng);

        // Celdas trampa: 1-2 celdas intermedias, nunca la meta ni vecinas del inicio.
        PickHoles(ref data, seed);

        return data;
    }

    private static void Carve(MazeData data, Cell a, Cell b)
    {
        if (b.r > a.r) data.hWall[a.r + 1, a.c] = false; // pasillo hacia arriba
        else if (b.r < a.r) data.hWall[a.r, a.c] = false; // pasillo hacia abajo
        else if (b.c > a.c) data.vWall[a.r, a.c + 1] = false; // hacia la derecha
        else data.vWall[a.r, a.c] = false; // hacia la izquierda
    }

    /// <summary>Vecinos conectados por un pasillo (sin muro entre medias).</summary>
    private static List<Cell> Neighbors(MazeData data, Cell cell)
    {
        List<Cell> list = new List<Cell>(4);

        if (cell.r + 1 < data.n && !data.hWall[cell.r + 1, cell.c])
            list.Add(new Cell { r = cell.r + 1, c = cell.c });
        if (cell.r - 1 >= 0 && !data.hWall[cell.r, cell.c])
            list.Add(new Cell { r = cell.r - 1, c = cell.c });
        if (cell.c + 1 < data.n && !data.vWall[cell.r, cell.c + 1])
            list.Add(new Cell { r = cell.r, c = cell.c + 1 });
        if (cell.c - 1 >= 0 && !data.vWall[cell.r, cell.c])
            list.Add(new Cell { r = cell.r, c = cell.c - 1 });

        return list;
    }

    /// <summary>BFS de distancias (en celdas) desde una celda por los pasillos reales.</summary>
    private static int[,] BfsDistances(MazeData data, Cell from)
    {
        int[,] dist = new int[data.n, data.n];
        for (int r = 0; r < data.n; r++)
            for (int c = 0; c < data.n; c++)
                dist[r, c] = int.MaxValue;

        Queue<Cell> queue = new Queue<Cell>();
        dist[from.r, from.c] = 0;
        queue.Enqueue(from);

        while (queue.Count > 0)
        {
            Cell cur = queue.Dequeue();
            foreach (Cell nb in Neighbors(data, cur))
            {
                if (dist[nb.r, nb.c] != int.MaxValue) continue;
                dist[nb.r, nb.c] = dist[cur.r, cur.c] + 1;
                queue.Enqueue(nb);
            }
        }
        return dist;
    }

    private static Cell FarthestCell(MazeData data, System.Random tieBreak)
    {
        int[,] dist = BfsDistances(data, data.start);
        Cell best = data.start;
        int bestDist = -1;
        for (int r = 0; r < data.n; r++)
        {
            for (int c = 0; c < data.n; c++)
            {
                if (dist[r, c] == int.MaxValue) continue;
                bool farther = dist[r, c] > bestDist;
                bool tie = dist[r, c] == bestDist && tieBreak != null && tieBreak.Next(100) < 50;
                if (farther || tie)
                {
                    best = new Cell { r = r, c = c };
                    bestDist = dist[r, c];
                }
            }
        }
        return best;
    }

    private static void PickHoles(ref MazeData data, int seed)
    {
        var rng = new System.Random(seed ^ 0x5A17);
        data.holes.Clear();

        int[,] dist = BfsDistances(data, data.start);

        List<Cell> candidates = new List<Cell>();
        for (int r = 0; r < data.n; r++)
        {
            for (int c = 0; c < data.n; c++)
            {
                if (dist[r, c] == int.MaxValue) continue;
                if (r == data.start.r && c == data.start.c) continue;
                if (r == data.goal.r && c == data.goal.c) continue;
                if (dist[r, c] < 2) continue; // no adyacentes al inicio
                if (dist[r, c] == dist[data.goal.r, data.goal.c]) continue;
                candidates.Add(new Cell { r = r, c = c });
            }
        }

        // Mezcla determinista (Fisher-Yates con la semilla).
        for (int i = candidates.Count - 1; i > 0; i--)
        {
            int j = rng.Next(i + 1);
            (candidates[i], candidates[j]) = (candidates[j], candidates[i]);
        }

        int count = data.n >= 6 ? 2 : 1;
        for (int i = 0; i < candidates.Count && data.holes.Count < count; i++)
            data.holes.Add(candidates[i]);
    }
}