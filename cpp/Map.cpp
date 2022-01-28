#include "Map.h"
#include "Corridor.h"
#include "Room.h"
#include <iostream>

Map::Map(std::pair<int,int> size){
    _size = size;
    _content =  std::vector<char> (size.first * size.second, ' ');
}

void Map::display(){
    std::cout<<std::string(_size.second, '-')<<std::endl;
    for (int i = 0 ; i < _content.size() ; i++){
        if (i % _size.second == 0) (std::cout<<"|");
        std::cout<<_content[i];
        if (i % _size.second == _size.second - 1) (std::cout<<"|"<<std::endl);

    }
    std::cout<<std::string(_size.second, '-')<<std::endl;

}

void Map::add_room(Room room){
    for (int i = room.get_place().first ; i < room.get_place().first + room.get_size().first ; i++){

    }
}