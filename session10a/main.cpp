#include <iostream>
#include "computadora.h"
#include "Laboratorio.h"
int main() {
    Computadora *c = new Computadora();
    c->mostrar();
    Laboratorio *l = new Laboratorio();
    l->agregarComputadora(*c);

    return 0;
}