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
| Girar la bomba | Pulsa el **cuerpo** de la bomba y mueve la mano |
| Conectar un cable | Agarra un **conector** (esfera) y suéltalo sobre la **toma** de su color |
| Jugar al Simón | Pulsa **START** (cara izquierda) y luego repite la secuencia en la rejilla 3×3 |
| Desarmar la bomba | Cuando todo esté resuelto, pulsa el **botón rojo** de la cara superior |
| Reiniciar partida | Botón **R** de la escena o tecla **`R`** |

> La bomba **solo** se agarra por su cuerpo; los botones, tomas y conectores
> mantienen su propia interacción (ver el arreglo de colliders en el FAQ).

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

Dimensiones del cubo: **0.90 × 0.65 × 0.60 m** (ancho × alto × fondo), eje X a
lo ancho. Cada puzzle vive **entero dentro de una cara**.

### Cara frontal `+Z` — **CABLES** (conectar)

- 3 cables (**ROJO, AZUL, AMARILLO**) con su conector en el centro y 3 tomas a
  la derecha en **orden desordenado** (`{ 1, 2, 0 }`).
- Se agarra el conector y se suelta sobre la toma de **su mismo color**.
- Acierto ⇒ el cable se fija, sube su emisión y suena *snip*.
- Fallo (suelta sobre otra toma) ⇒ **strike**, pitido y el conector vuelve a su
  sitio. Soltar en el vacío solo devuelve el cable (sin strike).
- Al conectar los 3 ⇒ `Solve()`.
- Medidas en `CablesModule.Layout` (`LeftX`, `MidX`, `RightX`, `PlaneZ`,
  `Row0Y`, `RowSpacing`, `SnapDistance`…).

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

### Cara derecha `+X` — **HUD**

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

Todos bajo el menú superior **`Bomba VR`** (`Assets/_Project/Editor/BombRoomSetup.cs`):

| Menú | Qué hace |
|---|---|
| `Abrir escena BombRoom` | Abre `Assets/_Project/Scenes/BombRoom.unity` |
| `Crear escena BombRoom (Editor)` | Crea la escena completa **con** simulador XRI |
| `Crear escena BombRoom (para Meta XR Simulator)` | Crea la escena **sin** simulador XRI |
| `Construir sala en la escena actual` | Añade sala+bomba a la escena abierta (si no hay bomba) |
| `Añadir módulo Simón a la bomba actual` | Añade/reemplaza el módulo Simón (rejilla 3×3 + START) |
| `Reparar colliders de la bomba (quitar avisos)` | Deja como colliders del grab **solo** el cuerpo |
| `Enfocar la vista Scene en la sala` | Encuadra la sala en la ventana Scene |
| `Agregar simulador XR a la escena actual` | Inserta el XR Interaction Simulator |
| `Quitar simulador XRI de la escena actual` | Lo elimina (para usar Meta XR Simulator) |

Los materiales se crean como **assets reales** en
`Assets/_Project/Materials/BombRoom/` (`Mat_Bomba`, `Mat_Panel`,
`Mat_Cable_*`, `Mat_Simon_*`, `Mat_SimonStart`, `Mat_LedOff`, …).

> Tras usar los menús que modifican la escena, **guarda** con `Cmd/Ctrl+S`.

---

## Parámetros configurables

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

### Módulo Cables (`Module_Cables` → Inspector)

La lista `cables` (stub, plug, socket, cord, color) se rellena desde el
constructor; las medidas fijas están en `CablesModule.Layout`.

---

## Estructura de carpetas

```
Assets/
├─ _Project/
│  ├─ Editor/
│  │  └─ BombRoomSetup.cs          # Menús "Bomba VR" + constructores de escena
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
│        └─ SimonModule.cs
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
- [ ] Más módulos (memoria, código de colores, interruptores…).
- [ ] Dificultad dinámica y modos de juego (tiempos/rondas).
- [ ] Efectos finales (humo, vibración háptica, marcador).
- [ ] Sustituir `✓`/`✗` por glifos válidos en la fuente TMP.

---

## Créditos

Proyecto académico de **IHC**. Construido sobre **Unity 6** con
**XR Interaction Toolkit**, **OpenXR** y **Meta XR SDK**.
