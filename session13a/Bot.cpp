#include "Bot.h"

Bot::Bot( string nombre) : Jugador( nombre) {
    cout<<"Creando un bot"<<endl;
}

void Bot::marcar(Tablero *t) {
    cout<<"Turno del computador"<<endl;
    for(int i=0; i<t->filas; i++){
        for(int j=0; j<t->columnas; j++){
            if(t->grilla[i][j].marca == 0){
                t->grilla[i][j].marca = 2;
                return;
            }
        }
    }
}