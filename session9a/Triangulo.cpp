
#include "Triangulo.h"
#include <math.h>
Triangulo::Triangulo(decimal lado1, decimal lado2, decimal lado3){
    cout<<"Instanciando el objeto triangulo"<<endl;
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
    cout<<lado1<<"\t"<<lado2<<"\t"<<lado3;
}
decimal Triangulo::perimetro(){
    return this->lado1+this->lado2+this->lado3;
}

decimal Triangulo::area(){
    decimal p = this->perimetro()/2;
    return sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
}

Triangulo::~Triangulo(){

}