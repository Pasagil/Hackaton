#include "Map.h"
#include "Corridor.h"
#include "Room.h"
#include <iostream>
#include <algorithm>

Map::Map(std::pair<int,int> size){
    _size = size;
    _content =  std::vector<char> (size.first * size.second, ' ');
}

char Map::get(int i, int j) const{
    return _content[i*_size.second + j];
}

void Map::set(int i, int j, char c){
    _content[i*_size.second + j] = c;
}

void Map::display() const{
    std::cout<<" "<<std::string(_size.second, '-')<<std::endl;
    for (int i = 0 ; i < _content.size() ; i++){
        if (i % _size.second == 0) (std::cout<<"|");
        std::cout<<_content[i];
        if (i % _size.second == _size.second - 1) (std::cout<<"|"<<std::endl);

    }
    std::cout<<std::string(_size.second, '-')<<std::endl;

}

void Map::add_room(Room room){
    int place = room.get_place().first * (_size.first * _size.second) + room.get_place().second;
    for (int i = room.get_place() ; i < room.get_size().first ; i++){
        for (int j = 0 ; j < room.get_size().second ; j++)
    } 
    }
}