#ifndef SESSION12B_GATO_H
#define SESSION12B_GATO_H

#include "Mascota.h"

class Gato : public Mascota {

    Gato();

public:
    Gato(string nombre, string raza, int peso);

    void dormir() override;

    void comer() override;

    void sonido() override;

    void mostrar() override;
};


#endif //SESSION12B_GATO_H
