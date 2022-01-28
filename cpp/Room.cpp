#include "Room.h"

Room::Room(std::pair<int,int> const size, std::pair<int,int> const place, std::pair<int,int> const door){
    _size = size;
    _place = place;
    _door = door;
    _content = std::vector<char> (size.first * size.second, '.');
    set(door.first,door.second,'+');
};

char Room::get(int i, int j) const{
    return _content[i*_size.second + j];
}

void Room::set(int i, int j, char c){
    _content[i*_size.second + j] = c;
}

std::pair<int,int> Room::get_place() const{
    return _place;
}

std::pair<int,int> Room::get_size() const{
    return _size;
}

std::vector<char> Room::get_content() const{
    return _content;
}

Room::~Room(){
}