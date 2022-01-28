class Objet{
    public:
    Objet type_objet;

};

class parchemin:public Objet{
    public:
    std::string contenu;
    parchemin(std::string cont): contenu(cont){};
};

class arme:public Objet{
    public:
    std::string nom;
    int points_enleves;
    arme(std::string n, int p): points_enleves(p), nom(n){};

};

class armure:public Objet{
    public:
    std::string nom;
    int points_proteges;
    armure(std::string n, int pp): points_proteges(p), nom(n){};
};

class nourriture:public Objet{
    public:
    std::string nom;
    int jauge_nourriture;
    nourriture(std::string n, int j): jauge_nourriture(n), nom(n){};

};

class potion:public Objet{
    public:
    std::string nom;
    int jauge_potion;
    potion(std::string n, int jp): nom(n), jauge_potion(jp){};
};