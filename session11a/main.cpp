#include <iostream>
#include "Tablero.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Tablero *buscaminas = new Tablero(3,4);
    buscaminas->instalar_minas();
    buscaminas->mostrar();
    return 0;
}