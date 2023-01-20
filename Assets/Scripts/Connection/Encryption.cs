using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using System.Linq;
using System.Threading.Tasks;
using UnityEngine;
using ProtoBuf;
using System.IO;
using Unity.VisualScripting;
using UnityEditor.MemoryProfiler;

public class Encryption
{
    private static RSAParameters publicKey;    
    private static RSACryptoServiceProvider csp;
    private static Clients connections;

    public static void PrepareSecureConnection()
    {
        connections = Clients.GetInstance();
        Globals.RSASecretCode = GetRandom256Code();
        csp = new RSACryptoServiceProvider(2048);

        if (connections.isTCPClientActive)
        {
            ExchangeData();
        }
    }

    private static async void ExchangeData()
    {
        try
        {
            connections.SendTCP(new byte[] { 0, 0, 0 }, false, Globals.PacketCode.None);
            RSAExchange receivedExcange = await GetpublicKeyFromServer();
            Globals.ClientNetworkID = BitConverter.GetBytes(receivedExcange.TemporaryKeyCode);
            string key = receivedExcange.PublicKey;

            publicKey = GetSecretKey(key);

            csp.ImportParameters(publicKey);
            string keyBackInString = GetSecretKey(csp.Encrypt(Globals.RSASecretCode, false));

            RSAExchange exchange = new RSAExchange(receivedExcange.TemporaryKeyCode, keyBackInString);

            byte[] packet = Array.Empty<byte>();
            using (var stream = new MemoryStream())
            {
                Serializer.Serialize(stream, exchange);
                packet = stream.ToArray();
            }

            byte[] resultPacket = new byte[] { 0, 1, 0 }.Concat(packet).ToArray();
            connections.SendTCP(resultPacket, false, Globals.PacketCode.None);
        }
        catch (Exception)
        {
            Debug.Log("error exchanging secret keys with server!");
        } 
        finally
        {
            csp.Dispose();
        }        
    }


    private static async Task<RSAExchange> GetpublicKeyFromServer()
    {
        byte[] result = Array.Empty<byte>();
        RSAExchange exchange = new RSAExchange();

        for (int i = 0; i < 100; i++)
        {
            if (TCPClient.ReceivedTCPPacket.Count> 0)
            {                
                bool isOK = TCPClient.ReceivedTCPPacket.TryDequeue(out result);

                if (isOK) 
                {                    
                    using (Stream stream = new MemoryStream(result))
                    {
                        exchange = Serializer.Deserialize<RSAExchange>(stream);                        
                    }
                    
                    return exchange;
                }
            }
            await Task.Delay(20);
        }

        return exchange;
    }

    public static string GetSecretKey(byte [] encoded_secret_key)
    {
        //conver bytes to normal string
        var sw = new System.IO.StringWriter();
        var xs = new System.Xml.Serialization.XmlSerializer(typeof(byte[]));
        xs.Serialize(sw, encoded_secret_key);
        return sw.ToString();
    }

    public static RSAParameters GetSecretKey(string key)
    {
        //getting back real public key by public key string
        var sr = new System.IO.StringReader(key);
        var xs = new System.Xml.Serialization.XmlSerializer(typeof(RSAParameters));
        return (RSAParameters)xs.Deserialize(sr);
    }


    public byte[] GetByteArrFromCharByChar(string key_in_string)
    {
        if (string.IsNullOrEmpty(key_in_string)) return new byte[1] { 0 };

        List<byte> result = new List<byte>();

        for (int i = 0; i < key_in_string.Length; i++)
        {
            result.Add(Byte.Parse(key_in_string.Substring(i, 1)));
        }

        return result.ToArray();
    }


    public static byte[] TakeSomeToArrayTO(Span<byte> source, int numberToTake)
    {
        if (numberToTake > source.Length)
        {
            numberToTake = source.Length;
        }

        return source.Slice(0, numberToTake).ToArray();
    }

    public static byte[] TakeSomeToArrayFromNumber(ReadOnlySpan<byte> source, int fromNumber)
    {
        if (fromNumber > source.Length)
        {
            fromNumber = source.Length - 1;
        }


        return source.Slice(fromNumber, (source.Length - fromNumber)).ToArray();
    }



    public static void Encode(ref byte[] source, byte[] key, byte[] networkID, byte code)
    {
        if (source == null || key == null)
        {            
            return;
        }

        int index = source.Length < key.Length ? source.Length : key.Length;

        for (int i = 0; i < index; i++)
        {
            source[i] = (byte)(source[i] + key[i]);
        }
        source = networkID.Concat(new byte[1] {code}).Concat(source).ToArray();
    }


    public static void Decode(ref byte[] source, byte[] key)
    {
        if (source.Length == 0 || key.Length == 0) return;

        int index = 0;

        for (int i = 6; i < source.Length; i++)
        {
            source[i] = (byte)(source[i] - key[index]);

            if ((index + 1) == key.Length)
            {
                index = 0;
            }
            else
            {
                index++;
            }
        }


    }

    public static string FromByteToString(byte[] data)
    {
        StringBuilder d = new StringBuilder();
        for (int i = 0; i < data.Length; i++)
        {
            d.Append(data[i]);
        }

        return d.ToString();
    }

    public static string FromByteToStringWithDelimiter(byte[] data)
    {
        StringBuilder d = new StringBuilder();
        for (int i = 0; i < data.Length; i++)
        {
            d.Append(data[i] + " - ");
        }

        return d.ToString();
    }

    public static byte[] GetHash384(string data)
    {
        SHA384 create_hash = SHA384.Create();
        return create_hash.ComputeHash(Encoding.UTF8.GetBytes(data));
    }

    public static byte[] GetRandom256Code()
    {
        SHA256 sh = new SHA256Managed();
        return sh.ComputeHash(Encoding.UTF8.GetBytes(GetRandomSymbols(256)));
    }

    public static string GetRandomSymbols(int nub_of_symb)
    {
        string[] arr_name = { "q", "w", "e", "r", "t", "y", "u", "i", "o", "p", "a", "s", "d", "f", "g", "h", "j", "k", "l", "z", "x", "c", "v", "b", "n", "m", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "A", "S", "D", "F", "G", "H", "J", "K", "L", "Z", "X", "C", "V", "B", "N", "M", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };
        string result = "";
        System.Random rnd = new System.Random();
        for (int i = 0; i < nub_of_symb; i++)
        {
            result = result + arr_name[rnd.Next(0, arr_name.Length - 1)];
        }

        return result;
    }
}
