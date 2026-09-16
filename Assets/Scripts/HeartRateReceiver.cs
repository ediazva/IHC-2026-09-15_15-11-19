using System;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Collections.Concurrent;
using UnityEngine;

public class HeartRateReceiver : MonoBehaviour
{
    public int port = 5005;
    private UdpClient client;
    private Thread receiveThread;
    private ConcurrentQueue<int> bpmQueue = new ConcurrentQueue<int>();

    public int CurrentBpm { get; private set; } = 70;

    void Start()
    {
        try
        {
            client = new UdpClient(port);
            receiveThread = new Thread(ReceiveLoop) { IsBackground = true };
            receiveThread.Start();
            Debug.Log($"[UDP] Escuchando en el puerto {port}...");
        }
        catch (Exception e)
        {
            Debug.LogError($"[UDP] Error al abrir puerto: {e.Message}");
        }
    }

    void ReceiveLoop()
    {
        IPEndPoint anyIP = new IPEndPoint(IPAddress.Any, port);
        while (true)
        {
            try
            {
                byte[] data = client.Receive(ref anyIP);
                string msg = System.Text.Encoding.UTF8.GetString(data);
                if (int.TryParse(msg, out int bpm))
                {
                    bpmQueue.Enqueue(bpm);
                }
            }
            catch
            {
                break;
            }
        }
    }

    void Update()
    {
        while (bpmQueue.TryDequeue(out int bpm))
        {
            CurrentBpm = bpm;
            Debug.Log($"<color=green>[BPM RECIBIDO EN UNITY]: {bpm}</color>");
        }
    }

    void OnDestroy()
    {
        receiveThread?.Abort();
        client?.Close();
    }
}