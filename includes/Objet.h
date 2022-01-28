#pragma once

#include <string>

class Objet{
    public:
    virtual void move(){}
    std::string _name;
    std::pair<int,int> _position;
    std::string _type;
    Objet(std::string n, std::pair<int,int> position, std::string type): _name(n), _position(position), _type(type){};
    Objet():_name() {};

    std::string get_name();
    std::pair<int,int> get_position();
    std::string get_type();
};

class parchemin:public Objet{
    public:
    std::string _contenu;
    parchemin(std::string cont, std::string n, std::pair<int,int> position): Objet(n, position, "arme"), _contenu(cont){};

    std::string get_contenu();
};

class arme:public Objet{
    public:
    int _dmg;
    arme(std::string n, std::pair<int,int> position, std::string type, int dmg): _dmg(dmg), Objet(n, position, type){};

    int get_dmg();
};

class armure:public Objet{
    public:
    int _gauge;
    armure(std::string n, std::pair<int,int> position, std::string type, int alvl): _gauge(alvl), Objet(n, position, type){};

    int get_gauge();
};

class nourriture:public Objet{
    public:
    int _gauge;
    nourriture(std::string n, std::pair<int,int> position, std::string type, int flvl): _gauge(flvl), Objet(n, position, type){};

    int get_gauge();

};

class potion:public Objet{
    public:
    std::string nom;
    int _gauge;
    potion(std::string n, std::pair<int,int> position, std::string type, int plvl): Objet(n, position, type), _gauge(plvl){};

    std::string get_nom();
    int get_gauge();
};
