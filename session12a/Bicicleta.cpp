#include "Bicicleta.h"
#include <iostream>
#include <ctime>
using namespace std;

Bicicleta::Bicicleta() {
    posX = 0;
    posY = 0;
    srand(time(nullptr));
    velocidadMinima = 0;
    velocidadMaxima = 137;
    velocidadActual = velocidadMinima + (rand() % ( velocidadMaxima - velocidadMinima + 1 ) );
}

void Bicicleta::avanzar() {
    cout<<"Avanzando:"<<endl;
    cout<<"Desde:"<<posX<<","<<posY;
    posX = posX + velocidadActual;
    cout<<"Hasta:"<<posX<<","<<posY;
}

void Bicicleta::retroceder() {
    posX = posX - velocidadActual;
}
