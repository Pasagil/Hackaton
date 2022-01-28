#include "Objet.h"

std::string Objet::get_name(){
    return _name;

}

std::pair<int,int> Objet::get_position(){
    return _position;
}
    
std::string Objet::get_type(){
    return _type;
}

std::string Parchemin::get_contenu(){
    return _contenu;
}

int arme::get_dmg(){
    return _dmg;
}

int armure::gauge(){
    return _gauge;
}

int nourriture::gauge(){
    return _gauge;
}

std::string potion::get_nom(){
    return _nom;
}

int potion::get_gauge(){
    return _gauge;
}