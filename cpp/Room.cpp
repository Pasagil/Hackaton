#include "Room.h"

Room::Room(std::pair<int,int> size, std::pair<int,int> place){
    _size = size;
    _place = place;
    _content = std::vector<char> (size.first * size.second, '.');
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