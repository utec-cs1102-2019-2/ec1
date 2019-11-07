#include "Perro.h"

Perro::Perro(string nombre, string raza, int peso
):Mascota( nombre,  raza,  peso) {
    cout<<"Creando un Perro"<<endl;
}

void Perro::dormir() {
    cout<<"Perro sleeping zZZ"<<endl;
}

void Perro::comer() {
    cout<<"Perro durmiendo Grrr"<<endl;
}

void Perro::sonido() {
    cout<<"Guaaau Guaauu"<<endl;
}
