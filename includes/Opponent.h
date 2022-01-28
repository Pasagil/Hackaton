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
    Opponent(int life, int dpt, const std::string& _name);
    ~Opponent();

    int get_dpt() const;
    int get_life() const;
    std::string get_name() const;

    void set_life(const int life);
    void set_dpt(const int dpt);
    void set_position(const int i, const int j);

    void hit(Personnage& target_perso);
    void damage(int dmg);
};
