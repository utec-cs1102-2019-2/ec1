#include "Juego.h"

Juego::Juego() {
    cout<<"Empezando el juego"<<endl;
}

void Juego::jugar() {
if(turno == 1){
    j1->marcar(t);
    turno = 2;
}else if(turno == 2){
    j2->marcar(t);
    turno = 1;
}
}