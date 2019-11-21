#include <iostream>
#include "Juego.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Juego *juego;
    do{
    juego = new Juego();
    cout<<"---------------------"<<endl;
    juego->start();
    juego->mostrar();
    cout<<juego->esPocker()<<endl;
    cout<<"---------------------"<<endl;
    }while(!juego->esPocker());
    return 0;
}