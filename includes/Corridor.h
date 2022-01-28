#include <vector>

class Corridor{
    private:
    std::pair<int,int> _start;
    std::pair<int,int> _end;

    public:
    Corridor(std::pair<int,int> start, std::pair<int,int> end);
};