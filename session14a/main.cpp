#include <iostream>
#include "Juego.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Juego *juego = new Juego();
    juego->start();
    juego->mostrar();

    return 0;
}