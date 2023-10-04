#include "Human.h"

class Raccoon
{
    string color_wool = "gray";
    float weight;
    string eyes_color = "green";
    string nick;
    string gender = "man";
    int energy;
    int hungry;
    string smell = "stink";
    bool wool = true;

public:
    
    Raccoon()
    {
        SetNick("Вася");
        SetEnergy(30);
        SetHungry(20);
        SetWeight(2);
    }
    Raccoon(string nick, int energy, int hungry, float weight)
    {
        SetNick(nick);
        SetEnergy(energy);
        SetHungry(hungry);
        SetWeight(weight);
    }

    void SetEnergy(int energy);
    int GetEnergy() const;
    void SetHungry(int hungry);
    int GetHungry() const;
    void SetNick(string nick);
    string GetColorWool() const;
    void SetColorWool(string color_wool);
    void SetWeight(float weight);
    float GetWeight() const;
    void Run(Human& human);
    void MakeNoize();
    void Walk();
    void Eat(Human& human, string meal);
    void Jump(Raccoon& human);
    void Print();
};