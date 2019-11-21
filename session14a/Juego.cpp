#include "Juego.h"
#include <ctime>

void Juego::start() {
    srand(time(nullptr));

    for(int i=0; i<5; i++){
        int iPalo=rand()%4;
        int iCarta=rand()%14;
        cartas.push_back(baraja->palos[iPalo].cartas[iCarta]);
    }
}

void Juego::mostrar() {
    for(int i=0; i<cartas.size(); i++){
        Carta carta = cartas[i];
        carta.mostrar();
    }
}

Juego::Juego() {
    baraja = new Baraja();
}
