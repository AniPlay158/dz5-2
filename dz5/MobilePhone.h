#include "Human.h"

class MobilePhone
{
    string color_phone;
    string brand;
    int count_camers;
    int battery;
    bool case_phone = true;
    string case_color = "purple";
    string port_type = "lightning";
    double price = 25999;
    int count_contact = 32;
    string call;

public:

    MobilePhone()
    {
        SetBrand("Iphone");
        SetBattery(18);
        SetCountCamers(3);
        
    }
    MobilePhone(string brand, int battery, int count_camers)
    {
        SetBrand(brand);
        SetBattery(battery);
        SetCountCamers(count_camers);
       
    }
    void SetBrand(string brand);
    string GetBrand() const;
    void SetColorPhone(string color_phone);
    string GetColorPhone() const;
    void SetColorCase(string case_color);
    string GetColorCase() const;
    void SetCountCamers(int count_camers);
    int GetCountCamers() const;
    void SetPrice(double price);
    int GetPrice() const;
    void SetCountContact(int count_contact);
    int GetCountContact() const;
    void PhoneCall();
    void Vibration();
    void TurnOnThePhone();
    void WatchingVideo(Human& human);
    void SetBattery(int battery);
    int GetBattery() const;
    void Print();
};