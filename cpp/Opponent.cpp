#include <vector>
#include <string>

#include "Opponent.h"
#include "Perso.h"

//--// Constructors

Opponent::Opponent()
{
    int _life;
    int _dpt;
    std::string _name;
}

Opponent::Opponent(int life, int dpt, std::string name)
{
    int _life = life;
    int _dpt = dpt;
    std::string _name = name;
}

//--// Getters

int Opponent::get_dpt() const
{
    return _dpt;
}

int Opponent::get_life() const
{
    return _life;
}

std::string Opponent::get_name() const
{
    return _name;
}

void Opponent::set_life(int life)
{
    _life = life;
}

void Opponent::set_dpt(int dpt)
{
    _dpt = dpt;
}

//--// Methods

void Opponent::hit(Perso& target_perso)
{
    target_perso.damage(this->get_dpt());
}

void Opponent::damage(int dmg)
{
    this->set_life(this->get_life() - dmg);
}