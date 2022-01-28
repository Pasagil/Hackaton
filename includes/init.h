#pragma once

#include "Opponent.h"
#include "Personnage.h"
#include "Map.h"

Map init_map(std::pair<int, int> size, std::vector<Room>& rooms, Personnage& heros)
{
    Map map(size);
    map.add_room(rooms[0]);
    map.set(heros.get_pos().first, heros.get_pos().second, 'H');
    return map;
}