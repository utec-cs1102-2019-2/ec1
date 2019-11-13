//
// Created by jbellido on 13/11/2019.
//

#include "Humano.h"

Humano::Humano(string nombre) : Jugador( nombre) {
  cout<<"Crendo un jugador humano"<<endl;
}

void Humano::marcar(Tablero *t) {
    cout<<"Turno del humano"<<endl;
    int x;
    int y;
    cout<<"x:";cin>>x;
    cout<<"y:";cin>>y;
    t->grilla[x][y].marca = 1;

}
