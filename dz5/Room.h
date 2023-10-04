#include "Human.h"

class Room
{
    int count_room;
    float height;
    float width;
    int count_angle = 4;
    string color_wall;
    bool stan_room = true;

public:
    Room()
    {
        SetCountRoom(2);
        SetHeight(3);
        SetWidth(6);
        SetColorWall("зелений");
    }

    Room(int count_room, float height, float width, string color_wall)
    {
        SetCountRoom(count_room);
        SetHeight(height);
        SetWidth(width);
        SetColorWall(color_wall);
    }

    void SetCountRoom(int count_room);
    int GetCountRoom() const;
    void SetHeight(float height);
    int GetHeight() const;
    void SetWidth(float width);
    float GetWidth() const;
    void SetCountAngle(float count_angle);
    float GetCountAngle() const;
    void SetColorWall(string color_wall);
    string GetColorWall() const;
    void TheRoomIsVentilated();
    void TheRoomIsCleaned();
    void TheRoomIsClosed(Human& human);
    void TheRoomIsOpen();
    void TheRoomIsNotLit();
    void Print();
};