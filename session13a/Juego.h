#ifndef SESSION13A_JUEGO_H
#define SESSION13A_JUEGO_H


#include "Jugador.h"
#include "Tablero.h"

class Juego {
public:
    int turno = 1;
    Jugador *j1;
    Jugador *j2;
    Tablero *t = new Tablero();

    Juego();
    void jugar();

};


#endif //SESSION13A_JUEGO_H
