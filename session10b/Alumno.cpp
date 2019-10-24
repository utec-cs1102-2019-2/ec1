#include "Alumno.h"

Alumno::Alumno(
        string nombre,
        int edad,
        string dni,
        string nacionalidad,
        string codigo) : Persona(nombre, edad, dni, nacionalidad) {

    this->codigo = codigo;
}

void Alumno::mostrarAlmumno() {
    this->mostrarPersona();
    cout<<"Cod.\t"<<this->codigo<<endl;
}
