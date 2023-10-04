#include <iostream>
using namespace std;

class Microphone
{
    string color_micro;
    bool buttom = true;
    string brand;
    int frequency_range = 5000;
    float cord_length = 1.5;
    string position;
    string connection;
    string connection_type;

public:

    Microphone()
    {
        SetBrand("Trust GXT");
        SetConnectionType("USB");
        SetColorMicro("black");

    }

    Microphone(string brand, string connection_type, string color_micro)
    {
        SetBrand(brand);
        SetConnectionType(connection_type);
        SetColorMicro(color_micro);

    }

    void SetCordLength(float cord_length);
    float GetCordLength() const;
    void SetFrequencyRange(int frequency_range);
    int GetFrequencyRange() const;
    void SetConnectionType(string connection_type);
    string GetConnectionType() const;
    void SetBrand(string brand);
    string GetBrand() const;
    void SetColorMicro(string color_micro);
    string GetColorMicro() const;
    void IncludeMiro();
    void TurnOffMiro();
    void Position();
    void Connection();
    void NoConnection();
    void Print();
};