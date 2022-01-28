
#include<iostream>
#include<vector>
#include"Map.h"

void movement(Map &playground, int x, int y, Personnage perso){

    int indice = (playground).get(x,y);
    std::string touche;
    std::cin >> touche ;
    if(touche == "z"){
        if( (((playground.get_content())[playground.get(x+1,y)]) == '.') || (((playground.get_content())[playground.get(x+1,y)])== '#') || (((playground.get_content())[playground.get(x+1,y)]) == '+')){
            (playground).set(x+1,y,'x');
            (playground).set(x,y,'.');}
        if()

    };
    if(touche == "q"){
        if( (((playground.get_content())[indice-1]) == '.') || (((playground.get_content())[indice-1])== '#') || (((playground.get_content())[indice-1]) == '+')){
            (playground).set(x,y-1,'x');
            (playground).set(x,y,'.');}
    };
    if(touche == "s"){
        if( (((playground.get_content())[playground.get(x-1,y)]) == '.') || (((playground.get_content())[playground.get(x-1,y)])== '#') || (((playground.get_content())[playground.get(x-1,y)]) == '+')){
            (playground).set(x-1,y,'x');
            (playground).set(x,y,'.');}
        
    };
    if(touche == "d"){
        if( (((playground.get_content())[indice+1]) == '.') || (((playground.get_content())[indice+1])== '#') || (((playground.get_content())[indice+1]) == '+')){
            (playground).set(x,y+1,'x');
            (playground).set(x,y,'.');}
        
    };
}











