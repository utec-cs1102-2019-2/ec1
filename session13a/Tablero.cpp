#include "Tablero.h"
#include <iostream>

Tablero::Tablero() {
    for(int i=0; i< this->filas; i++){
        vector<Cuadrado> fila;
        for(int j=0; j< this->columnas; j++){
            Cuadrado *c = new Cuadrado();
            fila.push_back(*c);
        }
        this->grilla.push_back(fila);
    }
}

void Tablero::mostrar() {
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << grilla[i][j].marca <<"\t";
        }
        cout<<endl;
    }
}