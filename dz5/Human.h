#pragma once

#include <iostream>
using namespace std;

class Human 
{
    float growth;
    string hair_color;
    string name;
    string gender;
    int age;
    string laugh;
    string massage;
    bool tshirts;
    string color_tshorts;
    int energy;
    int hungry;
    bool sits;

public:
    Human()
    {
        SetName("Ангелина");
        SetAge(18);
        SetGrowth(170.1);
        SetEnergy(44);
        SetHungry(44);
    }
    Human(string name, int age, float growth, int energy, int hungry)
    {
        SetName(name);
        SetAge(age);
        SetGrowth(growth);
        SetEnergy(energy);
        SetHungry(hungry);
    }
    void SetGrowth(float growth);
    float GetGrowth() const;
    void SetHairColor(string hair_color);
    string GetHairColor() const;
    void SetName(string name);
    string GetName() const;
    void SetGender(string gender);
    string GetGender() const;
    void SetAge(int age);
    int GetAge() const;
    void SetLaugh(string laugh);
    string GetLaugh() const;
    void SetMassage(string massage);
    string GetMassage() const;
    void SetEnergy(int energy);
    int GetEnergy() const;
    void SetHungry(int hungry);
    int GetHungry() const;
    void Sits();
    void Drink(string liquid);
    void Say(string nick);
    void Laugh();
    void ToFeed();
    void Print();
};