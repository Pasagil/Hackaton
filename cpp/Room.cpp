#include "Room.h"

Room::Room(std::pair<int,int> size, std::pair<int,int> place){
    _size = size;
    _place = place;
};

std::pair<int,int> Room::get_place() const{
    return _place;
}

std::pair<int,int> Room::get_size() const{
    return _size;
}