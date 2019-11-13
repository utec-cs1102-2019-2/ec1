#ifndef SESSION12B_PERRO_H
#define SESSION12B_PERRO_H

#include "Mascota.h"
#include <iostream>
using  namespace std;

class Perro : public Mascota {

public:
    Perro(string nombre, string raza, int peso);

    void dormir() override;

    void comer() override;

    void sonido() override;

    void mostrar() override;

};


#endif //SESSION12B_PERRO_H
