#ifndef SESSION13A_HUMANO_H
#define SESSION13A_HUMANO_H

#include "Jugador.h"

class Humano : public Jugador {

public:
    Humano(string nombre);

    void marcar() override;
};


#endif //SESSION13A_HUMANO_H
