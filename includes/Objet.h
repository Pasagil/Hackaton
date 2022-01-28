#include <string>

class Objet{
    public:
    virtual void move(){}
    std::string _name;
    Objet(std::string n): _name(n){}
};

class parchemin:public Objet{
    public:
    std::string _contenu;
    parchemin(std::string cont, std::string n): Objet(n), _contenu(cont){};
};

class arme:public Objet{
    public:
    int _dmg;
    arme(std::string n, int dmg): _dmg(dmg), Objet(n){};

};

class armure:public Objet{
    public:
    int _gauge;
    armure(std::string n, int alvl): _gauge(alvl), Objet(n){};
};

class nourriture:public Objet{
    public:
    int _gauge;
    nourriture(std::string n, int flvl): _gauge(flvl), Objet(n){};

};

class potion:public Objet{
    public:
    std::string nom;
    int _gauge;
    potion(std::string n, int plvl): Objet(n), _gauge(plvl){};
};