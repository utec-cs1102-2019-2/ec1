#ifndef SESSION13A_JUGADOR_H
#define SESSION13A_JUGADOR_H

#include <iostream>
#include "Juego.h"
using namespace std;

class Jugador {
public:
    int numero;
    string nombre;
    Jugador(int numero, string nombre);
    
    virtual void marcar() = 0;
};


#endif //SESSION13A_JUGADOR_H
