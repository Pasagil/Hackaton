#pragma once

#include <vector>
class Room{
    private:
    std::pair<int,int> _size;  //size of floor 
    std::pair<int,int> _place; //upper left corner
    std::vector<char> _content = std::vector<char> (_size.first * _size.second, '.');

    public:
    Room(std::pair<int,int> size, std::pair<int,int> place);
    ~Room();
    std::pair<int,int> get_size () const;
    std::pair<int,int> get_place() const;
    std::pair<int,int> get_content() const;
};