#include "Juego.h"
#include <ctime>

void Juego::start() {


    for(int i=0; i<5; i++){
        int iPalo=rand()%4;
        int iCarta=rand()%(baraja->palos[iPalo].cartas.size());
        cartas.push_back(baraja->palos[iPalo].cartas[iCarta]);
        baraja->palos[iPalo].cartas.erase(baraja->palos[iPalo].cartas.begin()+iCarta);
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

bool Juego::esPocker() {
    for(int i=0; i<2; i++){
        int repite = 0;
        for(int j=0; j<5; j++){
            if(cartas[i].numero == cartas[j].numero){
                repite++;
            }
        }
        if(repite == 4){
            return true;
        }
    }
    return false;
}

bool Juego::es2Pares() {
    int repeticiones = 0;
    for (int i = 0; i < cartas.size(); i++) {
        repeticiones += this->contar(cartas[i]);
    }
    if(repeticiones == 9){
        return true;
    }
    return false;
}

int Juego::contar(Carta c) {
    int contador = 0;
    for (int i = 0; i < cartas.size(); i++) {
        if (cartas[i].numero == c.numero) {
            contador++;
        }
    }
    return contador;
}