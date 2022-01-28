#pragma once

#include "Opponent.h"
#include "Personnage.h"
#include "Map.h"

Map init_map(std::pair<int, int> size, int nrooms = 2)
{
    Map map(size);
    std::vector<Room> rooms;
    rooms.push_back(Room(std::make_pair(3, 5), std::make_pair(1,1), std::make_pair(1,2)));
    rooms.push_back(Room(std::make_pair(6, 4), std::make_pair(9,12), std::make_pair(9+6,12+4)));
    map.add_room(rooms[0]);
    map.add_room(rooms[1]);

    return map;
}