using UnityEngine;

/// <summary>
/// Puente mínimo entre la física de la bolita y el módulo laberinto.
///
/// Los callbacks de colisión/trigger (OnTriggerEnter/OnCollisionEnter) se
/// reparten a los scripts que viven en el GameObject del Rigidbody o el del
/// collider. Como la bolita tiene su propio Rigidbody dinámico y el módulo
/// (MazeModule) cuelga del holder, añadimos este componente a la bolita para
/// reenviar los eventos al módulo que la construyó.
/// </summary>
public class MazeBallListener : MonoBehaviour
{
    public MazeModule owner;

    private void OnTriggerEnter(Collider other)
    {
        if (owner != null) owner.NotifyBallTrigger(other);
    }
}