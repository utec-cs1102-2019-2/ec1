#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H



class Vehiculo {
public:
    int velocidadMaxima;
    int velocidadMinima;
    int velocidadActual;
    int posX;
    int posY;

    Vehiculo();
    virtual void avanzar()=0;
    virtual void retroceder()=0;
};

#endif //SESSION12A_VEHICULO_H
