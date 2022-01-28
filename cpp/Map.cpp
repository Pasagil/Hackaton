#include "Map.h"
#include "Corridor.h"
#include "Room.h"
#include <iostream>

Map::Map(std::pair<int,int> size){
    _size = size;
    _content =  std::vector<char> (size.first * size.second, ' ');
}

void Map::display(){
    for (int i = 0 ; i < _content.size() ; i++){
        if (i / _size.first == 0) (std::cout<<"\n");
        std::cout<<_content[i];
    }
}

void Map::add_room(Room room){
    for (int i = room.get_place().first ; i < room.get_place().first + room.get_size().first ; i++){
        
    }
}