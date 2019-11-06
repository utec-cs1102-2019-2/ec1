#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H

class Vehiculo {
public:
    int velocidadMaxima;
    int velocidadMinima;
    int velocidadActual;
    int posX;
    int posY;

     void avanzar();

     void retroceder();
};

#endif //SESSION12A_VEHICULO_H
