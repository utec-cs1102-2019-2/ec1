#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include "Bote.h"
#include <vector>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bicicleta *b1 = new Bicicleta();
    Bote *b2 = new Bote();
    vector<Vehiculo> vehiculos;
    vehiculos.push_back(*b1);
    vehiculos.push_back(*b2);

    for(int i=0; i<2; i++){
        vehiculos[i].avanzar();

    }

    return 0;
}