#ifndef SESSION9A_TRIANGULO_H
#define SESSION9A_TRIANGULO_H

#include <iostream>
using namespace std;
typedef float decimal;

class Triangulo {
private:
    decimal lado1, lado2, lado3;
public:
    Triangulo(decimal lado1, decimal lado2, decimal lado3);
    decimal perimetro();
    decimal area();
    ~Triangulo();
};


#endif //SESSION9A_TRIANGULO_H
