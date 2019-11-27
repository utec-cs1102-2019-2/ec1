#include <iostream>
#include "Juego.h"
#include <ctime>

int main() {
    srand(time(nullptr));
    std::cout << "Hello, World!" << std::endl;
    Juego *juego;
    int i=0;
    do{
    i++;
    juego = new Juego();
    cout<<i<<"---------------------"<<endl;
    juego->start();
    juego->mostrar();
    cout<<juego->es2Pares()<<endl;
    cout<<"---------------------"<<endl;
    }while(!juego->es2Pares());
    return 0;
}