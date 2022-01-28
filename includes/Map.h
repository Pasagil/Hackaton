#pragma once

#include <vector>
#include <string>
#include "Corridor.h"
#include "Room.h"

class Map{
    private:
    std::pair<int,int> _size;
    std::vector<char> _content;

    public: 
    Map(std::pair<int,int> size);
    void add(std::string obj, std::pair<int,int> place);
    void add_room(Room room);
    void add_corridor(Corridor corridor);
    void display();
    };
