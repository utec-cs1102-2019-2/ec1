#ifndef SESSION12A_BOTE_H
#define SESSION12A_BOTE_H

#include "Vehiculo.h"

class Bote: public Vehiculo {

public:
    Bote();

    void avanzar() override ;

    void retroceder() override ;
};


#endif //SESSION12A_BOTE_H
