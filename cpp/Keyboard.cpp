
#include<iostream>
#include<vector>
#include"Map.h"

void movement(Map &playground, int x, int y){

    int indice = (playground).get(x,y);
    std::string touche;
    std::cin >> touche ;
    if(touche == "z"){
        if( (((playground.get_content())[indice]) == '.') || (((playground.get_content())[indice])== '#') || (((playground.get_content())[indice]) == '+')){
            (playground).set(x,y+1,'x');
            (playground).set(x,y,'.');}
        //Ici on met les autres if : si y'a des ennemis à attaquer, des pieces a recup etc

    };
    if(touche == "q"){
        if( (((playground.get_content())[indice]) == '.') || (((playground.get_content())[indice])== '#') || (((playground.get_content())[indice]) == '+')){
            (playground).set(x-1,y,'x');
            (playground).set(x,y,'.');}
    };
    if(touche == "s"){
        if( (((playground.get_content())[indice]) == '.') || (((playground.get_content())[indice])== '#') || (((playground.get_content())[indice]) == '+')){
            (playground).set(x,y-1,'x');
            (playground).set(x,y,'.');}
        
    };
    if(touche == "d"){
        if( (((playground.get_content())[indice]) == '.') || (((playground.get_content())[indice])== '#') || (((playground.get_content())[indice]) == '+')){
            (playground).set(x+1,y,'x');
            (playground).set(x,y,'.');}
        
    };
}











