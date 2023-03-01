using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TCPIncomingPacketManager : MonoBehaviour
{
    private CharacterManagement characterManagement;
    private Clients connections;

    public void SetTCPIncomingPacketManager(CharacterManagement characterManagement) 
    {
        this.characterManagement = characterManagement;
        connections = Clients.GetInstance();
    }

    private void Update()
    {       
        if (characterManagement != null && connections!=null && Globals.isConnectionEstablished) 
        {
            byte[] data = Array.Empty<byte>();

            if (connections.ReceivedTCPPacket.TryDequeue(out data))
            {
                switch (data[0])
                {
                    case 4://get initial player data
                        byte[] cleanData = Encryption.TakeSomeToArrayFromNumber(data, 1);
                        Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                        PlayerDataInitial initData = ProtobufSchemes.DeserializeProtoBuf<PlayerDataInitial>(cleanData);
                        characterManagement.InitPlayerData(initData.ObjectId, initData);
                        //Debug.Log(mainPlayerDataPacket.ObjectId + " = " + mainPlayerDataPacket.AppearanceId + " = " + mainPlayerDataPacket.Name);
                        break;
                }
            }

            if (connections.ReceivedUDPPacket.TryDequeue(out data))
            {
                switch (data[0])
                {
                    case 2://get initial player data
                        byte[] cleanData = Encryption.TakeSomeToArrayFromNumber(data, 1);
                        Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                        MovementPacketFromServer mover = ProtobufSchemes.DeserializeProtoBuf<MovementPacketFromServer>(cleanData);
                        characterManagement.UpdateMovementData(mover.ObjectId, mover);
                        break;
                }
            }
        }                
    }

    /*
    public void ProcessPacketTCP(byte[] data)
    {
        //Debug.Log(string.Join("=", data));

        switch(data[0])
        {
            case 4://get initial player data
                byte[] cleanData = Encryption.TakeSomeToArrayFromNumber(data, 1);
                Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                PlayerDataInitial initData = ProtobufSchemes.DeserializeProtoBuf<PlayerDataInitial>(cleanData);
                //characterManagement.InitPlayerData(initData.ObjectId, initData);
                //Debug.Log(mainPlayerDataPacket.ObjectId + " = " + mainPlayerDataPacket.AppearanceId + " = " + mainPlayerDataPacket.Name);
                break;
        }

    }

    public void ProcessPacketUDP(byte[] data)
    {
        //Debug.Log(string.Join("=", data));

        switch (data[0])
        {
            case 2://get initial player data
                byte[] cleanData = Encryption.TakeSomeToArrayFromNumber(data, 1);
                Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                MovementPacketFromServer mover = ProtobufSchemes.DeserializeProtoBuf<MovementPacketFromServer>(cleanData);
                characterManagement.UpdateMovementData(mover.ObjectId, mover);
                break;
        }

    }
    */

}
