#include <iostream>
#include "Mascota.h"
#include "Gato.h"
#include "Perro.h"
#include <vector>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Perro *p = new Perro("Firulais","Dalmata", 14);
    Gato *g = new Gato("Melquiades","Desconocido", 4);
    vector<Mascota *> mascotas;
    mascotas.push_back(p);
    mascotas.push_back(g);

    for(int i=0; i<mascotas.size(); i++){
        mascotas[i]->mostrar();
        mascotas[i]->sonido();

    }
    return 0;
}