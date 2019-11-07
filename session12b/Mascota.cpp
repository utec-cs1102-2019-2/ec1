#include "Mascota.h"

Mascota::Mascota(string nombre, string raza, int peso) {
    cout<<"Creando una nueva mascota"<<endl;
    this->nombre = nombre;
    this->peso = peso;
    this->raza = raza;
}

void Mascota::mostrar() {
    cout<<"Nombre:\t"<<nombre<<endl;
    cout<<"Peso:\t"<<peso<<endl;
    cout<<"Raza:\t"<<raza<<endl;
}