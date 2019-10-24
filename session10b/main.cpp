#include <iostream>
#include "Persona.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Persona *juanito = new Persona("Juanito", 18, "123123123", "Peruano");
    juanito->mostrarPersona();
    return 0;
}