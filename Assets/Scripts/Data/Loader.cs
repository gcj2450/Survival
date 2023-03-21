using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using UnityEngine;

public class Loader
{
    public static void LoadDataToFile(string fileName, HeightConverter data, FileSaveType fileSaveType)
    {
        LoadDataToFile(fileName, data.GetData(), fileSaveType);
    }

    public static void LoadDataToFile(string fileName, string data, FileSaveType fileSaveType)
    {
        string pathS = @$"{Application.dataPath}\media\data";
        if (!Directory.Exists(pathS))
        {
            Directory.CreateDirectory(pathS);
        }

        string pathString = Path.Combine(pathS, fileName);
        string startingSymbol = "";

        switch(fileSaveType)
        {
            case FileSaveType.HeightMaps:
                startingSymbol = "he~";
                break;
        }

        using (StreamWriter sw = new StreamWriter(pathString, true))
        {
            sw.WriteLine(startingSymbol + data);
        }
    }

    public static List<Vector3> LoadHeightDataFromFile(TextAsset asset)
    {
        List<Vector3> result = new List<Vector3>();
        string[] data = asset.text.Split('\n');

        if (data.Length > 0)
        {
            try
            {
                for (int i = 0; i < data.Length; i++)
                {
                    string[] predata = data[i].Split('~');
                    if (predata[0] == "he")
                    {
                        result.Add(new Vector3(int.Parse(predata[1]), float.Parse(predata[3], CultureInfo.InvariantCulture), int.Parse(predata[2])));
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogError(ex);
            }
        }

        return result;
    }

    public static List<Vector3> LoadHeightDataFromFile(string fileName)
    {
        List<Vector3> result = new List<Vector3>();

        string pathS = @$"{Application.dataPath}\media\data";
        if (!Directory.Exists(pathS))
        {
            Debug.LogError("path do not exists");
            return result;
        }

        string pathString = Path.Combine(pathS, fileName);
        List<string> preresult = new List<string>();

        

        using (StreamReader sr = new StreamReader(pathString))
        {
            string line;
            while ((line = sr.ReadLine()) != null)
            {
                preresult.Add(line);
            }
        }

        if (preresult.Count > 0)
        {
            try
            {
                for (int i = 0; i < preresult.Count; i++)
                {                    
                    string[] predata = preresult[i].Split('~');
                    if (predata[0] == "he")
                    {
                        result.Add(new Vector3(int.Parse(predata[1]), float.Parse(predata[3], CultureInfo.InvariantCulture), int.Parse(predata[2])));
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.LogError(ex);
            }
            
        }

        return result;
    }
}

public enum FileSaveType
{
    HeightMaps,
    Colliders
}

public struct HeightConverter
{
    private Vector3 mainPosition;
    private float height;

    public HeightConverter(Vector3 mainPosition, float height)
    {
        this.mainPosition = mainPosition;
        this.height = height;
    }

    public string GetData()
    {
        return $"{mainPosition.x.ToString("f0")}~{mainPosition.z.ToString("f0")}~{height.ToString("f2", CultureInfo.InvariantCulture)}";
    }
}


