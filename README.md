# Bomba VR — Prototipo de desarme en Realidad Virtual

Prototipo de **Interacción Humano-Computador** en el que el jugador debe
**desarmar una bomba** con las **manos** (VR), resolviendo varios minijuegos
(puzzles) repartidos por las **caras de un cubo** que se puede agarrar y girar.

Todo el contenido del juego (sala, bomba, módulos, materiales, sonidos y HUD) se
**genera y autora desde Unity**, sin depender de assets 3D importados, para que
el proyecto funcione recién clonado.

---

## Tabla de contenidos

1. [Descripción y estado actual](#descripción-y-estado-actual)
2. [Requisitos](#requisitos)
3. [Cómo abrir y ejecutar](#cómo-abrir-y-ejecutar)
4. [Controles](#controles)
5. [Flujo de juego](#flujo-de-juego)
6. [Arquitectura del código](#arquitectura-del-código)
7. [Los puzzles (uno por cara)](#los-puzzles-uno-por-cara)
8. [Menús de editor](#menús-de-editor)
9. [Parámetros configurables](#parámetros-configurables)
10. [Estructura de carpetas](#estructura-de-carpetas)
11. [Solución de problemas (FAQ)](#solución-de-problemas-faq)
12. [Git y ramas](#git-y-ramas)
13. [Pendiente / roadmap](#pendiente--roadmap)

---

## Descripción y estado actual

El juego consiste en una **bomba con forma de cubo** colocada sobre una mesa. El
jugador la puede **agarrar y girar** con las manos para ver sus caras; en cada
cara hay una tarea distinta. Se resuelve la bomba cuando **todos los módulos**
están resueltos y se pulsa el **botón de activación** (cara superior).

Características implementadas:

- Sala construida **en el editor** (mesa, suelo, luces, bomba y módulos
  visibles antes de pulsar *Play*).
- **Temporizador** con cuenta regresiva y penalización por error.
- **Sistema de strikes** (3 errores ⇒ explosión).
- **Módulo de Cables** (conectar conector con la toma de su color).
- **Módulo Simón** (repetir una secuencia de luces, por rondas).
- **Módulo Laberinto** (cara derecha `+X`): laberinto de canicas físico que se
  resuelve **inclinando todo el cubo**; se regenera distinto en cada partida.
- **HUD** en mundo con tiempo, estado, errores y feedback.
- **Audio 100 % procedural** (generado por código, sin ficheros de audio).
- Soporte para **manos (hand tracking)** y para probar **sin visor** con el
  *XR Interaction Simulator* de XRI o el *Meta XR Simulator*.

> Estado: **prototipo jugable**. El puzzle de "cortar cables" se reemplazó por
> el de "conectar"; queda `CuttingTool.cs` como base para un futuro módulo de
> corte.

---

## Requisitos

| Herramienta | Versión |
|---|---|
| Unity | **6000.6.0f1** (Unity 6.6) |
| Universal Render Pipeline (URP) | 17.6.0 |
| XR Interaction Toolkit (XRI) | 3.6.0 |
| Input System | 1.20.0 |
| OpenXR | 1.18.0 |
| Meta XR SDK (All) | 205.0.0 |
| XR Hands | 1.9.0 |

Paquetes completos en `Packages/manifest.json`. Los paquetes ya están incluidos
como dependencias del proyecto; Unity los descargará al abrirlo por primera vez.

---

## Cómo abrir y ejecutar

1. Abre el proyecto con **Unity 6000.6.0f1** (Unity Hub).
2. Abre la escena **`Assets/_Project/Scenes/BombRoom.unity`**
   (o usa el menú `Bomba VR → Abrir escena BombRoom`).
3. Pulsa **Play**.

### Opción A — Probar sin visor (XR Interaction Simulator)

Es la ruta por defecto de la escena tal como está guardada.

- La escena ya incluye el **rig XR** y el **XR Interaction Simulator**.
- Usa la **UI del simulador** (panel flotante) y el teclado/ratón para mover la
  mano/controlador simulado.
- Con Play verás un mensaje del tipo *"XRUIInputModule mouse and touch input
  will be disabled while the simulated devices are active"*: es **informativo**,
  no un error.

### Opción B — Meta XR Simulator (recomendado para manos)

El **XR Interaction Simulator** y el **Meta XR Simulator** no deben convivir
(se pelean por las entradas). Para usar el de Meta:

1. Menú `Bomba VR → Quitar simulador XRI de la escena actual`.
2. Menú **`Meta → Meta XR Simulator → Activate`**.
3. Pulsa **Play**.

> También puedes crear desde cero una escena lista para el simulador de Meta con
> `Bomba VR → Crear escena BombRoom (para Meta XR Simulator)`.

### Opción C — Visor real (Quest + OpenXR)

- Conecta el visor por **Link/Air Link** y asegúrate de que **OpenXR** es el
  runtime activo.
- `Project Settings → XR Plug-in Management → PC`: **OpenXR** habilitado.
- Si ves en consola *`XR_ERROR_RUNTIME_UNAVAILABLE`* / *`xrCreateInstance
  failed`*, **no hay runtime OpenXR activo**: activa Meta Quest Link o el Meta
  XR Simulator. Ver [Solución de problemas](#solución-de-problemas-faq).

---

## Controles

| Acción | Cómo |
|---|---|
| Mover el cubo | **Pellizca** (pulgar + índice) o **cierra la mano** sobre el cuerpo |
| Conectar un cable | Agarra el **mango** de color y suéltalo sobre la **toma** de su color |
| Jugar al Simón | Pulsa **START** (cara izquierda) y luego repite la secuencia en la rejilla 3×3 |
| Jugar al Laberinto | Resuelve primero **Simón** (regala la bolita), introdúcela por el hueco *AQUÍ INTRODUCE LA BOLITA* (cara `+X`) y **inclina el cubo** para llevarla al hueco del *FINAL* |
| Desarmar la bomba | Cuando todo esté resuelto, pulsa el **botón rojo** de la cara superior |
| Reiniciar partida | Botón **R** de la escena o tecla **`R`** |

> El cubo **solo** se agarra por su cuerpo (colliders acotados a `Body`); los
> botones, tomas y mangos mantienen su propia interacción (ver *Parámetros*).

---

## Flujo de juego

```
        autoStart / Begin()
Idle ──────────────────────► Running ──(todos los módulos resueltos)──► Finalizado
  ▲                             │                                          │
  │                             │ strike (x3) / timeout                    │ pulsar botón rojo
  │                             ▼                                          ▼
  └──── R (Restart) ◄──── Exploded ◄─────────────────────────────────── Defused
```

- **Idle**: estado inicial.
- **Running**: corre el temporizador; los módulos se pueden resolver.
- **Finalizado**: todos los módulos resueltos; se detiene el tiempo y el botón
  superior se **enciende** para que el jugador lo pulse.
- **Defused**: victoria (botón superior pulsado).
- **Exploded**: 3 strikes o tiempo agotado.
- **R**: reinicia todo (`BombManager.Restart()`).

---

## Arquitectura del código

Núcleo orientado a **eventos**: los módulos no conocen la UI ni la bomba; solo
emiten eventos (`OnSolved`, `OnStrike`) y `BombManager` los orquesta.

```
BombManager ──► TimerSystem, StrikeSystem, List<ModuleBase>
     ▲                                   │
     │ eventos (OnSolved / OnStrike)     │ eventos de módulo
     │                                   ▼
  BombUI ◄────────── CablesModule / SimonModule / BombArmButton
```

### Sistemas centrales

| Script | Ruta | Responsabilidad |
|---|---|---|
| `BombManager` | `Scripts/Bomb/BombManager.cs` | Orquesta estado, módulos, strikes y fin de partida |
| `TimerSystem` | `Scripts/Bomb/TimerSystem.cs` | Cuenta regresiva, penalizaciones y evento de timeout |
| `StrikeSystem` | `Scripts/Bomb/StrikeSystem.cs` | Contador de errores; al máximo dispara la explosión |
| `ModuleBase` | `Scripts/Modules/ModuleBase.cs` | Clase base de todo módulo (`Solve()`, `AddStrike()`, `ResetModule()`) |
| `BombUI` | `Scripts/BombRoom/BombUI.cs` | HUD: tiempo, estado, feedback, LEDs, FX de explosión |
| `SFX` | `Scripts/BombRoom/ProceduralAudio.cs` | Efectos y notas generados por código |
| `Fx` | `Scripts/BombRoom/Fx.cs` | Materiales/mallas procedurales (URP Lit) |

### Detalles clave

- **`BombManager`** auto-resuelve `TimerSystem`/`StrikeSystem` si están en el
  mismo GameObject y **recolecta los módulos** en `Start()` con
  `GetComponentsInChildren<ModuleBase>()`, así admite módulos creados en
  tiempo de ejecución.
- **`ModuleBase`** expone `Title`, `IsSolved`, `OnSolved`, `OnStrike`.
- **`BombUI`** clona los materiales en tiempo de ejecución para **no ensuciar
  los assets**, y hace *billboard* del canvas para que el texto siempre mire a
  la cámara.
- **`SFX`** genera `AudioClip` con `AudioClip.Create` (senos, ruido marrón,
  acordes) y **cachea** cada clip. `SFX.Tone(freq, …)` se usa para las notas del
  Simón.

---

## Los puzzles (uno por cara)

Dimensiones del cubo: **0.60 × 0.40 × 0.40 m** (ancho × alto × fondo), eje X a
lo ancho. Cada puzzle vive **entero dentro de una cara**. El cubo descansa sobre
la mesa a **0.74 m** del suelo (centro del cubo a 0.94 m, cara superior a
1.14 m). Todas las medidas de los puzzles son **locales del cubo**, así que si lo
agarras y lo mueves, las caras se mueven con él.

### Cara frontal `+Z` — **CABLES** (conectar)

- 3 cables (**ROJO, AZUL, AMARILLO**) con un **mango** (el cilindro que se agarra)
  a la izquierda y 3 **tomas** a la derecha en **orden desordenado**.
- Se agarra el **mango** de color y se suelta sobre la toma de **su mismo color**.
- Acierto ⇒ el cable se fija, sube su emisión y suena *snip*.
- Fallo (suelta sobre otra toma) ⇒ **strike**, pitido y el mango vuelve a su
  sitio. Soltar en el vacío solo devuelve el cable (sin strike).
- Al conectar los 3 ⇒ `Solve()`.

#### Dónde se agarran los cables (lo más importante)

```
   vista de la cara frontal (+Z), coordenadas locales del cubo
   (cubo: ancho X de -0.30..0.30, alto Y de -0.20..0.20)

      x ≈ -0.08           x ≈ -0.02       x = 0.22
   ┌─ MANGO ◉ ───── plug ──┐            ┌─ toma ─┐
   │   (agarre)            │            │  ████  │
   └──────────────────────┘            └────────┘
        z = PlaneZ (0.215)              z = PlaneZ (0.215)
```

- El **mango (stub)** es el cilindro horizontal que se agarra con la mano
  (`HandGrabInteractable`): está en `x = MidX (-0.08)`, `z = PlaneZ (0.215)`,
  en las filas `y = 0.09, -0.02, -0.13` (mundo: suma a la posición del cubo,
  p. ej. con el cubo en y≈0.94 → mangos en y≈1.03, 0.92, 0.81).
- El **plug** (esfera de contacto) sobresale del mango hacia `+X`
  (rotación del mango `(0,0,-90)`, plug en local `(0,1,0)`).
- Las **tomas** están en `x = RightX (0.22)`, mismas filas e `z`.
- **Agarre**: colliders del mango + plug (cilindro ≈ 6 cm, plug ≈ 7 cm).
  Si se te hace difícil agarrar, sube `stub.transform.localScale` y el
  `CapsuleCollider` en `CablesModule.CreateCable`.
- **Conectar**: al **soltar**, si el plug o el mango queda a menos de
  `SnapDistance` (0.24 m) de una toma, se pega: misma toma = conecta;
  distinta = strike. Para hacerlo más fácil/fiable sube `SnapDistance`.

Parámetros en `CablesModule.Layout` (ver tabla en *Parámetros configurables*).

### Cara izquierda `−X` — **SIMÓN** (secuencia)

- Rejilla **3×3** de botones de color (9 colores tipo arcoíris).
- **No arranca solo**: hay un botón **START** (verde, con etiqueta) debajo de la
  rejilla. Al pulsarlo se reproduce la secuencia y el jugador la repite.
- Avanza por **rondas crecientes** (por defecto 4 pasos, 3 rondas, +1 por ronda;
  ≈ 30–60 s).
- Cada botón suena con una **nota pentatónica** distinta (Do mayor), de modo que
  la secuencia es una melodía.
- Fallo ⇒ **strike** y se repite la ronda.
- Completar todas las rondas ⇒ `Solve()`.

### Cara derecha `+X` — **LABERINTO** (canicas, inclinar el cubo)

Laberinto de canicas tipo juguete de madera, **incrustado en la cara derecha**
(`Layout.FaceOffsetX = +0.306`). Se juega **agarrando e inclinando todo el cubo**:
la bolita rueda por el tablero.

- **Generación**: cada inicio de partida (y cada `ResetModule`) regenera un
  laberinto `N×N` **distinto** (semilla aleatoria; actíva `useFixedSeed` para
  fijar una) con el generador propio `MazeSpiralGenerator` (backtracking
  recursivo / DFS, siempre resoluble).
  - Paredes con `BoxCollider`, sin `Rigidbody`: el peso físico lo da la bolita.
- **Bolita**: la regala **Simón** al resolverse (campo `ballSource`). Aparece
  agarrable en el platito del hueco de entrada (`MazeSlotDish`), etiquetado
  **`AQUÍ INTRODUCE LA BOLITA`**. Se agarra con la mano o el mando
  (`Isdk.Grab` + `Isdk.HandGrab`).
- **Meta / trampas**: la meta es la **celda más lejana** por BFS (siempre
  resoluble) y hay **1–2 celdas trampa** intermedias. Ambas son cazoletas
  huecas detrás de la lámina:
  - Bolita en el **hueco FINAL** (`MazeGoalDish`, verde) ⇒ `Solve()`.
  - Bolita en una **trampa** (`MazeHoleDish`, roja) ⇒ `AddStrike()` y vuelve a
    la celda inicial.
- **Extras**: embudo y guías visuales hacia el hueco, físicas de rodadura
  (fricción alta, sin rebote), `Rigidbody.CollisionDetectionMode.Continuous`.
- La bolita se crea **inactiva** hasta que Simón se resuelve
  (`OnSolved → GrantBall`).

> El generador del asset importado **MazeGen (Goldor)** se revisó y se descartó:
> no genera colliders (solo prefabs decorativos) y los prefabs demo no vinieron.
> El generador propio evita cualquier dependencia de assets.

### HUD (flotante sobre el cubo)

- Canvas en mundo con:
  - **Tiempo** restante (verde → ámbar ≤ 30 s → rojo ≤ 10 s, con parpadeo).
  - **Estado**: `Resuelve: cables n/3 · simón r/total`.
  - **Feedback** temporal (conectado, error, ronda OK…).
- Los **LEDs de strike** (esferas, filo superior frontal) se encienden en rojo
  uno por error.

### Cara superior `+Y` — **BOTÓN DE ACTIVACIÓN**

- Apagado durante la partida.
- Al resolverse **todos** los módulos se **enciende y late** en rojo:
  pulsarlo desarma la bomba (`BombManager.Defuse()`).
- Si se pulsa antes de tiempo: aviso y pitido (sin strike).

---

## Menús de editor

Todos bajo el menú superior **`Bomba VR`**:

| Menú | Qué hace | Script |
|---|---|---|
| `Abrir escena BombRoom` | Abre `Assets/_Project/Scenes/BombRoom.unity` | `BombRoomSetup.cs` |
| `Crear escena BombRoom (para Quest / OpenXR / ISDK)` | Crea la escena completa con cosas para Quest | `BombRoomSetup.cs` |
| `Construir sala en la escena actual` | Añade sala+bomba a la escena abierta | `BombRoomSetup.cs` |
| `Añadir módulo Simón a la bomba actual` | Crea el módulo Simón (rejilla 3×3 + START) | `BombRoomSetup.cs` |
| `Añadir módulo Laberinto (cara +X, bolita desde Simón)` | Crea `MazeModuleHolder` en la cara derecha, asigna `ballSource = Simón` y añade las etiquetas `Goal` y `Hole` | `MazeModuleSetup.cs` |
| `Reconstruir bomba (cubo pequeño, texto fuera, agarre con manos)` | **Regenera la mesa y toda la bomba** con los valores de `CablesModule.Layout`, `SimonModule.Layout` y `BuildBomb()` (útil tras cambiar parámetros) | `BombRoomSetup.cs` |
| `Fix ▶ Habilitar emisión de materiales VR (_EMISSION)` | Activa el keyword de emisión en todos los materiales | `BombRoomSetup.cs` |
| `Enfocar la vista Scene en la sala` | Encuadra la sala en la ventana Scene | `BombRoomSetup.cs` |
| `Agregar simulador XR a la escena actual` | Inserta el XR Interaction Simulator | `BombRoomSetup.cs` |
| `Quitar simulador XRI de la escena actual (usar Meta XR Simulator)` | Elimina el simulador XRI | `BombRoomSetup.cs` |
| `Compilar APK Quest (BombaVR.apk)` | Compila el APK Android a la raíz del proyecto (necesita módulo Android + OpenXR de Meta) | `BombaVrBuild.cs` |

> Tras modificar los `Layout`/constantes de los módulos, usa **`Reconstruir bomba`**
> para regenerar la escena (o pulsa Play: los módulos se (re)construyen solos).

---

## Parámetros configurables

Los parámetros de **dificultad** y de algunos módulos se editan en el Inspector;
las **medidas de la bomba y los puzzles** son constantes de código (así se pueden
generar en runtime). Todas las medidas de los puzzles son en **metros, locales
del cubo**.

### Dificultad (`Bomba` → Inspector)

| Campo | Valor por defecto | Script |
|---|---|---|
| `Timer System → Start Seconds` | 120 | `TimerSystem.startSeconds` |
| `Penalty Per Strike` | 35 s | `BombManager.penaltyPerStrike` |
| `Max Strikes` | 3 | `StrikeSystem.maxStrikes` |
| `Auto Start` | activado | `BombManager.autoStart` |

### Módulo Simón (`Module_Simon` → Inspector)

| Campo | Valor | Descripción |
|---|---|---|
| `Start Length` | 4 | Pasos de la primera ronda |
| `Rounds To Solve` | 3 | Rondas necesarias para resolverlo |
| `Length Increase Per Round` | 1 | Cuánto crece cada ronda |
| `Step Duration` | 0.40 s | Duración de cada luz |
| `Step Gap` | 0.15 s | Pausa entre luces |
| `Start Delay` | 1.00 s | Espera tras pulsar START |
| `Round Pause` | 0.70 s | Pausa entre rondas |

### Módulo Laberinto (`MazeModuleHolder` → Inspector)

| Campo | Valor | Descripción |
|---|---|---|
| `gridSize` | 5 | Laberinto `N×N` celdas (5 ≈ tablero de 15 cm) |
| `cellSize` | 0.030 m | Tamaño de cada celda |
| `wallThickness` | 0.008 m | Grosor de las paredes |
| `wallHeight` | 0.050 m | Altura de las paredes sobre la lámina |
| `ballRadius` | 0.0065 m | Radio de la bolita |
| `useFixedSeed` | off | Fija la semilla para depurar/dificultad |
| `fixedSeed` | 42 | Semilla usada con `useFixedSeed` |
| `ballSource` | Module_Simon | Módulo que regala la bolita al resolverse |

Medidas físicas del módulo en `MazeModule.Layout` (constantes de código):
`FaceOffsetX 0.306`, `BackX 0.004`, `SheetX 0.012` (lámina de rodadura),
`DishX 0.009` (cazoletas meta/trampa), `SlotDishY 0.012` (platito de recepción).

---

### DÓNDE SE AGARRAN LOS CABLES — `CablesModule.Layout`

Constantes en `Assets/_Project/Scripts/Modules/CablesModule.cs` (clase
`Layout`, valores por defecto actuales):

| Constante | Valor | Qué controla |
|---|---|---|
| `LeftX` | −0.24 | Anclaje X del cordón en la pared de la cara frontal |
| `MidX` | −0.08 | **Centro X del mango que se agarra** (dónde pones los dedos) |
| `RightX` | +0.22 | Centro X de las **tomas** |
| `PlaneZ` | 0.215 | Profundidad `z` de mangos y tomas; 0.215 = justo delante del panel (cara a 0.20). Mover esto "saca" o "hunde" los cables de la superficie |
| `Row0Y` | 0.09 | `y` local de la fila **superior** |
| `RowSpacing` | 0.11 | Separación en `y` entre filas (las filas van hacia abajo: 0.09, −0.02, −0.13) |
| `PlugRadius` | 0.04 | Radio de referencia del plug |
| `SocketSize` | 0.09 | Tamaño (escala) de cada toma |
| `CordRadius` | 0.012 | Radio del cordón (LineRenderer) |
| `SnapDistance` | **0.24** | **Facilidad para conectar**: al soltar, si plug o mango está a menos de esta distancia (en metros) de una toma, se pega a ella (acierto si es su color). Subirlo = más fácil |
| `LeftX` … `SocketSize` | | Se aplican en `CreateCable()` / `CreateSocket()` y en `Build()` |

El mango en sí (también en `CreateCable`):

| Parámetro | Valor | Efecto |
|---|---|---|
| `stub.transform.localScale` | `(0.05, 0.06, 0.05)` | Tamaño del cilindro que agarras (mundo ≈ 6 cm × 13 cm) |
| `stub` rotación | `(0, 0, -90)` | Orienta el mango horizontal, con el plug hacia `+X` (hacia las tomas) |
| `CapsuleCollider` (stub) | radio `0.6`, alto `2.2` (del primitivo) | Volumen del agarre (mundo ≈ radio 3 cm, alto 13 cm). **Si no agarras bien, sube el radio/coolider** |
| `plug` localPosition | `(0, 1, 0)` | La esfera del punto de contacto en el extremo `+X` del mango |
| `plug` escala / collider | `(1.4, 1.17, 1.4)` / radio `0.5` | Tamaño del plug (mundo ≈ Ø 7 cm) |

> El mango es agarrable **con la mano desnuda** gracias a `HandGrabInteractable`
> (`Isdk.HandGrab`) y **con mando** por `GrabInteractable` (`Isdk.Grab`); ambos se
> añaden en `CablesModule.PrepareCable`. Al conectar un cable se desactivan sus
> agarres (`enabled = false`) para que no se pueda re-coger.

---

### MÓDULO SIMÓN (posiciones) — `SimonModule.Layout`

Constantes en `Assets/_Project/Scripts/Modules/SimonModule.cs`:

| Constante | Valor | Qué controla |
|---|---|---|
| `FaceX` | −0.30 | Cara del cubo donde vive (izquierda, −X) |
| `PanelX` | −0.284 | Profundidad del panel donde se apoyan los botones |
| `Spacing` | 0.105 | Separación entre centros de la rejilla 3×3 |
| `ButtonSize` | 0.12 | Tamaño de cada botón |

- Los botones se pulsan con **dedo** (`PokeInteractable` vía `Isdk.Poke`): la
  superficie de punteo se coloca automáticamente en la **cara exterior** del
  botón hacia `−X`, para que no tengas que hundir la mano.
- `NoteFrequencies` y `ButtonColors` (arrays justo debajo de `Layout`) definen la
  melodía y los colores por botón.

---

### BOMBA Y SALA — `BombRoomSetup.cs` (`Assets/_Project/Editor/`)

| Valor | Número | Dónde |
|---|---|---|
| Cuerpo `Body` (box) | `0.60 × 0.40 × 0.40` | `BuildBomb()` (`const bodyW/H/D`) |
| Mesa tablero `Top` | `1.05 × 0.04 × 0.72` a `y = 0.72` | `BuildTable()` |
| Patas | `0.05 × 0.70 × 0.05` en 4 esquinas | `BuildTable()` |
| Alto de la mesa (retorno) | `0.74` | La bomba se apoya en `tableTop` |
| `FrontPanel` (cara frontal) | `0.52 × 0.34 × 0.01` en `z = 0.196` | `BuildBomb()` |
| LEDs de strike (3) | radio `0.04`, en `x = −0.09/0/0.09`, `y = 0.185`, `z = 0.215` | `BuildBomb()` |
| `ArmButton` (cara superior) | local `(0, 0.24, 0)`, escala `(0.22, 0.06, 0.22)` | `BuildBomb()` |
| HUD (`BombHUD`) | local `(0, 0.40, 0.03)` (flotando **fuera** del cubo) | `BuildBomb()` |
| Placa HUD (`HudPlate`) | `0.66 × 0.30 × 0.01` en `(0, 0, −0.02)` | `BuildHudCanvas()` |
| Fuentes HUD | Tiempo `130`, Estado `56`, Feedback `44` | `BuildHudCanvas()` |

> Para mover el cubo con la mano: `BombManager.Start` añade el agarre de mano
> (`Isdk.HandGrab`) al hijo **`Body`** (así sus colliders son solo el cuerpo) y el
> agarre de mando (`Isdk.Grab`) a la raíz con colliders también acotados a `Body`
> (`ScopeBombGrabRoutine`) para que la bomba **no robe el agarre de los mangos**.

---

### Helpers de interacción — `Assets/_Project/Scripts/XR/IsdkInteraction.cs`

| Método | Qué hace |
|---|---|
| `Isdk.Poke(go, dirLocal)` | Añade `PokeInteractable` con superficie de punteo en la **cara exterior** del objeto (offset = mitad del grosor). `PokePadding` (0.014) agranda el área de acierto |
| `Isdk.Grab(go, rb)` | Añade `GrabInteractable` + `Grabbable` + `GrabFreeTransformer` + rigidbody cinemático → **agarre de mando** que mueve el objeto |
| `Isdk.HandGrab(go, rb)` | Añade `HandGrabInteractable` → **agarre con la mano desnuda** (Quest). Sin `HandGrabPose` autorizado usa la superficie del collider como punto de agarre |
| `Isdk.Bind(...)` | Suscribe `WhenStateChanged` (Select/Unselect) de un interactable de forma segura/reutilizable |
| `Isdk.ScopeGrabColliders(...)` | Acota los colliders candidatos de un `GrabInteractable` (reflexión sobre `_colliders`) — clave para que la bomba no robe los mangos |

Otros ajustes relevantes:

- `EditorHeadHeightOffset` (`Scripts/XR/`): sube la cámara del Editor a 1.6 m
  (sin visor). En el Quest real no aplica.
- Menú `Compilar APK Quest` (`Assets/_Project/Editor/BombaVrBuild.cs`): usa la
  escena `BombRoom` y escribe `BombaVR.apk` en la raíz del proyecto.

---

## Estructura de carpetas

```
Assets/
├─ _Project/
│  ├─ Editor/
│  │  ├─ BombRoomSetup.cs          # Menús "Bomba VR" + constructores de escena
│  │  ├─ MazeModuleSetup.cs        # Menú "Añadir módulo Laberinto" + tags Goal/Hole
│  ├─ Materials/BombRoom/          # Materiales URP (assets generados)
│  ├─ Scenes/BombRoom.unity        # Escena principal del prototipo
│  └─ Scripts/
│     ├─ Bomb/
│     │  ├─ BombManager.cs
│     │  ├─ TimerSystem.cs
│     │  └─ StrikeSystem.cs
│     ├─ BombRoom/
│     │  ├─ BombUI.cs
│     │  ├─ BombArmButton.cs
│     │  ├─ BombResetButton.cs
│     │  ├─ CuttingTool.cs         # (legado: futuro módulo de corte)
│     │  ├─ Fx.cs
│     │  └─ ProceduralAudio.cs
│     └─ Modules/
│        ├─ ModuleBase.cs
│        ├─ BombRoomPalette.cs
│        ├─ CablesModule.cs
│        ├─ SimonModule.cs
│        ├─ MazeModule.cs          # Módulo Laberinto (cara +X)
│        ├─ MazeGenerator.cs       # MazeSpiralGenerator: DFS/backtracker + BFS
│        └─ MazeBallListener.cs    # Reenvío de disparos de la bolita al módulo
├─ Samples/…                       # Rig XR y simulador (XR Interaction Toolkit)
├─ XR/                             # Loaders y ajustes de OpenXR / XR Simulation
└─ Tables and Chairs/              # Prefab de la mesa
```

- **Runtime** → `Assembly-CSharp`; **Editor** → `Assembly-CSharp-Editor`
  (no hay `.asmdef` propios, todo va a los ensamblados por defecto).

## Pendiente / roadmap

- [ ] Pulir el **sonido** del Simón y del resto de interacciones.
- [ ] Arreglar definitivamente el **runtime OpenXR** para visor real.
- [ ] Módulo de **corte de cables** (ya existe `CuttingTool.cs` como base).
- [x] Módulo **Laberinto** de canicas (cara `+X`, regenerado en cada partida).
- [ ] Más módulos (memoria, código de colores, interruptores…).
- [ ] Dificultad dinámica y modos de juego (tiempos/rondas).
- [ ] Efectos finales (humo, vibración háptica, marcador).
- [ ] Sustituir `✓`/`✗` por glifos válidos en la fuente TMP.

---

## Créditos

Proyecto académico de **IHC**. Construido sobre **Unity 6** con
**XR Interaction Toolkit**, **OpenXR** y **Meta XR SDK**.
