#include "Bot.h"

Bot::Bot(int numero, string nombre) : Jugador(numero, nombre) {
    cout<<"Creando un bot"<<endl;
}

void Bot::marcar() {
    cout<<"Turno del computador"<<endl;
}