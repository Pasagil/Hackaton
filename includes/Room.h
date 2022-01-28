#pragma once

#include <vector>
class Room{
    private:
    std::pair<int,int> _size;  //size of floor 
    std::pair<int,int> _place; //upper left corner
    std::pair<int,int> _door;
    std::vector<char> _content ;

    public:
    Room(std::pair<int,int> size, std::pair<int,int> place);
    ~Room();
    void set(int i, int j, char c);
    char get(int i, int j) const;
    std::pair<int,int> get_size () const;
    std::pair<int,int> get_place() const;
    std::pair<int,int> get_door() const;
    std::vector<char> get_content() const;
};