//
// Created by jbellido on 7/11/2019.
//

#include "Gato.h"

Gato::Gato(string nombre, string raza, int peso
) : Mascota(nombre, raza, peso) {
cout<<"Creando un Gato"<<endl;
}

void Gato::dormir() {
    cout<<"El gato "<<this->nombre<<" esta durmiendo"<<endl;
}

void Gato::comer() {
    cout<<"El gato "<<this->nombre<<" esta comiendo";
}

void Gato::sonido() {
    cout<<"El gato "<<this->nombre<< "dice miaaaaauu";
}

void Gato::mostrar() {
    cout<<"******** GATO *************"<<endl;
    Mascota::mostrar();
    cout<<"***************************"<<endl;

}
