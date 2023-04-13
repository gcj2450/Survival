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

            while(connections.ReceivedTCPPacket.Count>0)
            {
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

                        case 2://get movement data
                            cleanData = Encryption.TakeSomeToArrayFromNumber(data, 1);
                            Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                            MovementPacketFromServer mover = ProtobufSchemes.DeserializeProtoBuf<MovementPacketFromServer>(cleanData);
                            characterManagement.UpdateMovementData(mover.ObjectId, mover);
                            break;

                        case 6://get movement data                            
                            byte[] cleanData1 = Encryption.TakeSomeToArrayFromNumber(data, 1);
                            Encryption.Decode(ref cleanData1, Globals.RSASecretCode);
                            ListOfMovementPacketsFromServer movers = ProtobufSchemes.DeserializeProtoBuf<ListOfMovementPacketsFromServer>(cleanData1);
                            characterManagement.UpdateMovementData(movers);

                            break;
                    }
                }
            }

            while (connections.ReceivedUDPPacket.Count > 0)
            {
                byte[] dataUDP = Array.Empty<byte>();
                if (connections.ReceivedUDPPacket.TryDequeue(out dataUDP))
                    {
                    
                    switch (dataUDP[0])
                    {
                        case 2://get movement data
                            byte[] cleanData = Encryption.TakeSomeToArrayFromNumber(dataUDP, 1);
                            Encryption.Decode(ref cleanData, Globals.RSASecretCode);
                            MovementPacketFromServer mover = ProtobufSchemes.DeserializeProtoBuf<MovementPacketFromServer>(cleanData);
                            characterManagement.UpdateMovementData(mover.ObjectId, mover);
                            break;

                        case 6://get movement data                            
                            byte[] cleanData1 = Encryption.TakeSomeToArrayFromNumber(dataUDP, 1);
                            Encryption.Decode(ref cleanData1, Globals.RSASecretCode);
                            ListOfMovementPacketsFromServer movers = ProtobufSchemes.DeserializeProtoBuf<ListOfMovementPacketsFromServer>(cleanData1);
                            characterManagement.UpdateMovementData(movers);

                            break;
                    }
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
