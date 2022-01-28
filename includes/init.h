#pragma once

#include "Opponent.h"
#include "Personnage.h"
#include "Map.h"

Map init_map(std::pair<int, int> size, std::vector<Room> rooms)
{
    Map map(size);
    map.add_room(rooms[0]);
    return map;
}