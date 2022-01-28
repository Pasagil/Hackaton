#include"personnage.h"
#include"objet.h"
pragma once

void Personnage::damage(int dam){
    if(dam > _hitpoint){
        _hitpoint = 0;
    }
    else{
        _hitpoint -= dam;
    };
}

void Personnage::soin(int s){
    if(s + _hitpoint > _max_hitpoint){
        _hitpoint = _max_hitpoint;
    }
    else{
        _hitpoint += s
    };
}

void Personnage::change_max_hp(int i){
    _max_hitpoint += i;
}

void Personnage::gain_or(int o){
    _or += o;
}

void Personnage::gain_strength(int gain){
    _strength += gain;
}

void Personnage::ramaser_objet(Objet obj){
    if(_bag.size() < _bag_size){
        _bag.push_back(obj);
    }
    else(
        std::cout << "Voulez vous récupérer cet objet ?" << std::endl;
        std::string rep;
        std::cin >> rep;
        if(rep = oui){
            std::cout << "Quel objet voulez-vous jeter ?" << std::endl;
                int r;
                std::cin >> r;
                _bag.erase((_bag).begin()+r);
                _bag.push_back(obj);
        };

    )
}

void Personnage::prendre_en_main(int j){
    Objet a = _bag[j];
    _bag[j] = _On_hand;
    _On_hand = a;
}

