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
    Map(std::pair<int,int> const size);
    Map();
    ~Map();
    void add(Objet &obj);
    void add_room(Room const &room);
    void add_corridor(Corridor const &corridor);
    void set(int i, int j, char c);
    char get(int i, int j) const;
    std::vector<char> get_content() const;
    void display() const;
    };
