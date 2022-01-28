#pragma ONCE

#include <vector>
#include <string>
#include "Personnage.h"

class Opponent
{
private:
    int _life;
    int _dpt;
    std::string _name;
    std::pair<int, int> _position;
public:
    Opponent();
    Opponent(int life, int dpt, std::string _name);
    ~Opponent();

    int get_dpt() const;
    int get_life() const;
    std::string get_name() const;

    void set_life(int life);
    void set_dpt(int dpt);
    void Opponent::set_position(int i, int j);

    void hit(Personnage& target_perso);
    void damage(int dmg);
};
