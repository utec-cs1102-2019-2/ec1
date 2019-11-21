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
};



#endif //SESSION14A_JUEGO_H
