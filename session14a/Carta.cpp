#include "Carta.h"
Carta::Carta(int numero, string palo) {
    this->numero = numero;
    this->palo = palo;
}

int Carta::mostrar() {
    cout<<numero<<" "<<palo<<endl;
}