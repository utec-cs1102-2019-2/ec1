#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include <vector>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Bicicleta *b1 = new Bicicleta();
    b1->avanzar();
    b1->avanzar();
    vector<Vehiculo> bicicletas;
    bicicletas.push_back(*b1);

    return 0;
}