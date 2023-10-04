#include <iostream>
#include <windows.h>
using namespace std;

#include "Human.h"
#include "Room.h"
#include "MobilePhone.h"
#include "Raccoon.h"
#include "Microphone.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Human m1;
    Human m2("Миша", 20, 185.2, 50, 50);
    /*m.SetName("Ангеліна");
    m.SetLaugh("ХА-ХА-ХА!");
    m.SetEnergy(90);
    m.SetAge(18);
    m.SetGrowth(170.2);
    m.SetHairColor("русий");
    m.SetGender("жінка");
    m.SetHungry(30);*/

    MobilePhone mb1;
    MobilePhone mb2("Samsung", 32, 1);

    Raccoon r1;
    Raccoon r2("Антон", 20, 30, 3);
    /*r.SetNick("Степан");
    r.SetWeight(5.6);
    r.SetEnergy(100);
    r.SetHungry(70);*/

    Room room1;
    Room room2(5, 4, 5, "бiлий");

    Microphone micro1;
    Microphone micro2("Ibis", "USB-Type C", "Жовтий");
    string meal;

    m1.Print();
    cout << "------------------------------------" << endl;
    m2.Print();
    cout << "------------------------------------" << endl;
    mb1.Print();
    cout << "------------------------------------" << endl;
    mb2.Print();
    cout << "------------------------------------" << endl;
    r1.Print();
    cout << "------------------------------------" << endl;
    r2.Print();
    cout << "------------------------------------" << endl;
    room1.Print();
    cout << "------------------------------------" << endl;
    room2.Print();
    cout << "------------------------------------" << endl;
    micro1.Print();
    cout << "------------------------------------" << endl;
    micro2.Print();
    cout << "------------------------------------" << endl;


    r1.Jump(r1);
    cout << "Що буде їсти єнот?" << endl;
    cin >> meal;

    cout << "------------------------------------" << endl;
    m1.Print();
    r1.Print();
}