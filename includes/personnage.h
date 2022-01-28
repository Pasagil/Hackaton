#pragma once

#include<iostream>
#include<vector>

#include "Objet.h"

class Personnage{
    
    private :
    
    int _hitpoint;
    int _max_hitpoint;
    int _strength;
    int _or;
    std::vector<Objet*> _bag;
    int _bag_size;
    Objet _on_hand;
    //Armor _Armor;
    //Helmet _helmet;
    int thirst;
    int hunger;

    public :

    Personnage(): _hitpoint(12), _max_hitpoint(12), _strength(16), _or(0), _bag(std::vector<Objet*>{}), _bag_size(10), _on_hand(Objet()), thirst(20), hunger(20){};

    void damage(int dam);
    void soin(int s);
    void hit();
    void change_max_hp(int i);
    void gain_or(int o);
    void gain_strength(int gain);
    void ramasser_objet(Objet* obj);
};