#include "Cilindro.h"
#include <math.h>
Cilindro::Cilindro(float radio, float altura) {
    this->altura = altura;
    this->radio =radio;
}

float Cilindro::volumen() {
    return M_PI*(radio*radio)*altura;
}

float Cilindro::areaTotal(){
    float area_base = 2*M_PI*(radio*radio);
    return area_base+areaLateral();
}

float Cilindro::areaLateral(){
    return 2*M_PI*radio*altura;
}

Cilindro::~Cilindro() {

}