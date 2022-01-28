
#include<iostream>
#include<vector>

void movement(std::vector<char> &playground, int x, int y){

    int indice = set(x,y)
    std::string touche;
    std::cin >> touche ;
    if(touche == "z"){
        if( ((*playground[indice]) == ".") || ((*playground[indice]) == "#") || ((*playground[indice]) == "+")){
            (*playground[position[0]][position[1]+1]) = "x";
            (*playground[position[0]][position[1]]) = ".";}
        //Ici on met les autres if : si y'a des ennemis à attaquer, des pieces a recup etc

    };
    if(touche == "q"){
        if( ((*playground[position[0]-1][position[1]]) == ".") || ((*playground[position[0]][position[1]+1]) == "#") || ((*playground[position[0]][position[1]+1]) == "+")){
            (*playground[position[0]-1][position[1]]) = "x";
            (*playground[position[0]][position[1]]) = ".";}
    };
    if(touche == "s"){
        if( ((*playground[position[0]][position[1]-1]) == ".") || ((*playground[position[0]][position[1]+1]) == "#") || ((*playground[position[0]][position[1]+1]) == "+")){
            (*playground[position[0]][position[1]-1]) = "x";
            (*playground[position[0]][position[1]]) = ".";}
    };
    if(touche == "d"){
        if( ((*playground[position[0]+1][position[1]]) == ".") || ((*playground[position[0]][position[1]+1]) == "#") || ((*playground[position[0]][position[1]+1]) == "+")){
            (*playground[position[0]+1][position[1]]) = "x";
            (*playground[position[0]][position[1]]) = ".";}
    };
}











