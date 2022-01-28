#include <vector>
class Room{
    private:
    std::pair<int,int> _size;  //size of floor 
    std::pair<int,int> _place; //upper left corner

    public:
    Room(std::pair<int,int> size, std::pair<int,int> place);
    ~Room();
    std::pair<int,int> get_size () const;
    std::pair<int,int> get_place() const;
};