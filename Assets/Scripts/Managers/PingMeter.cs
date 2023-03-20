using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

public class PingMeter
{
    private TextMeshProUGUI textForData;
    private Dictionary<int, long> packetsIn = new Dictionary<int, long>();
    private Dictionary<int, long> packetsOut = new Dictionary<int, long>();
    private long updateRate;
    private long lastUpdateTime;
    private List<long> meter = new List<long>();

    public void SetPingMeter(TextMeshProUGUI textMeshPro, long updateInterval)
    {
        textForData = textMeshPro;
        updateRate = updateInterval;
    }

    public void InTimerData(long time, int packetId)
    {        
        if (!packetsIn.ContainsKey(packetId))
        {
            packetsIn.Add(packetId, time);
        }        
    }

    public void OutTimerData(long time, int packetId)
    {
        if (!packetsOut.ContainsKey(packetId))
        {
            packetsOut.Add(packetId, time);
        }

        showData(packetId);
    }

    private void showData(int currentPacketId)
    {
        
        if (packetsIn.ContainsKey(currentPacketId) && packetsOut.ContainsKey(currentPacketId))
        {
            updateData(packetsOut[currentPacketId] - packetsIn[currentPacketId]);

            if ((Globals.Timer.ElapsedMilliseconds - lastUpdateTime) < updateRate) return;
            lastUpdateTime = Globals.Timer.ElapsedMilliseconds;
            textForData.text = getData().ToString("f0");
        }        
    }

    private void updateData(long newdata)
    {
        meter.Add(newdata);
        if (meter.Count>10)
        {
            meter.Remove(meter[0]);
        }
    }

    private double getData()
    {
        return meter.Average();
    }
}
