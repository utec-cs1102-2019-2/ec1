#include <iostream>
#include "Juego.h"
#include "Bot.h"
#include "Humano.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Juego *juego = new Juego();
    Bot *cpu = new Bot( "R2D2");
    Humano *max = new Humano("Max");
    juego->j1 = cpu;
    juego->j2 = max;

    for(int i=0; i<10; i++){
        juego->t->mostrar();
        juego->jugar();
    }
    return 0;
}