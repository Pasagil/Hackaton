#include <vector>
#include <iostream>

#include "Map.h"
#include "Opponent.h"
#include "Personnage.h"
#include "Objet.h"
#include "init.h"
#include "Room.h"

int main()
{
    int size;
    Personnage heros;
    Map map;
    std::vector<Room> rooms;
    rooms.push_back(Room(std::make_pair(6, 4), std::make_pair(9,12), std::make_pair(1,1)));
    map = init_map(std::make_pair(20,30), rooms);
    map.display();
}