#ifndef SESSION12B_MASCOTA_H
#define SESSION12B_MASCOTA_H

#include <iostream>
using namespace std;
class Mascota {
public:
    string nombre;
    string raza;
    int peso;
    Mascota(string nombre, string raza, int peso);
    void mostrar();
    virtual void dormir() = 0;
    virtual void comer() = 0;
    virtual void sonido() = 0;
};
#endif //SESSION12B_MASCOTA_H