#include "Palo.h"

Palo::Palo(string nombre, string color) {
    this->nombre = nombre;
    this->color = color;
    for(int i=1; i<14; i++){
        Carta *carta = new Carta(i, nombre);
        cartas.push_back(*carta);
    }
}