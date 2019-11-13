#ifndef SESSION13A_BOT_H
#define SESSION13A_BOT_H

#include "Jugador.h"

class Bot: public Jugador {
public:
    Bot(string nombre);

    void marcar(Tablero *t) override;
};


#endif //SESSION13A_BOT_H
