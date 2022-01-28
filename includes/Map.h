#pragma once

#include <vector>
#include <string>
#include "Corridor.h"
#include "Room.h"
#include "Objet.h"

class Map{
    private:
    std::pair<int,int> _size;
    std::vector<char> _content;

    public: 
    Map(std::pair<int,int> size);
    void add(Objet obj);
    void add_room(Room room);
    void add_corridor(Corridor corridor);
    void set(int i, int j, char c);
    char get(int i, int j) const;
    void display() const;
    };
