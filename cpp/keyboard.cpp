
#include<iostream>
#include<vector>
#include"Map.h"
#include "keyboard.h"

void movement(Map &playground, Personnage perso){
    int x, y = perso.get_pos();
    std::string touche;
    std::cin >> touche ;
    if(touche == "z"){
        if( ((playground.get(x-1,y)]) == '.') || ((playground.get(x-1,y)])== '#') || (((playground.get(x-1,y)]) == '+')){
            (playground).set(x-1,y,'x');
            (playground).set(x,y,'.');}
        if()

    };
    if(touche == "q"){
        if( (playground.get(x, y-1) == '.') || (playground.get(x, y-1)== '#') || ((playground.get_content(x, y-1) == '+')){
            (playground).set(x,y-1,'x');
            (playground).set(x,y,'.');}
    };
    if(touche == "s"){
        if( ((playground.get(x+1,y)]) == '.') || ((playground.get(x+1,y)])== '#') || (((playground.get(x+1,y)]) == '+')){
            (playground).set(x+1,y,'x');
            (playground).set(x,y,'.');}
        
    };
    if(touche == "d"){
        if( (playground.get(x, y+1) == '.') || (playground.get_content(x, y+1)== '#') || ((playground.get_content(x, y+1) == '+')){
            (playground).set(x,y+1,'x');
            (playground).set(x,y,'.');}
        
    };
}











