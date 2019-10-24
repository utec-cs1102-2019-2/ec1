#include <iostream>
#include "Persona.h"
#include "Alumno.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    Persona *juanito = new Persona("Juanito", 18, "123123123", "Peruano");
    juanito->mostrarPersona();

    Alumno *alvaro = new Alumno("Alvaro", 19,"454545454", "Peruano", "4545452" );
    alvaro->mostrarAlmumno();
    return 0;
}