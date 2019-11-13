#ifndef SESSION13A_JUGADOR_H
#define SESSION13A_JUGADOR_H

#include <iostream>
#include "Juego.h"
using namespace std;

class Jugador {
public:
    string nombre;
    Jugador(string nombre);

    virtual void marcar() = 0;
};


#endif //SESSION13A_JUGADOR_H
