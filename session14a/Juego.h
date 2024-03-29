#ifndef SESSION14A_JUEGO_H
#define SESSION14A_JUEGO_H

#include <iostream>
#include <vector>
#include "Baraja.h"
#include "Carta.h"

using namespace std;

class Juego {
public:
    Baraja *baraja;
    vector<Carta> cartas;
    Juego();
    void start();
    void mostrar();
    bool esPocker();
    int contar(Carta c);
    bool es2Pares();
};

#endif //SESSION14A_JUEGO_H
