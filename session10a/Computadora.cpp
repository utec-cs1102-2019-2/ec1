#include "Computadora.h"
#include <iostream>
using namespace std;
void Computadora::mostrar(){
    cout<<"Mostrando computadora"<<endl;
    cout<<"Keyboard Features:"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<this->teclado->getDescripcion()<<endl;
    cout<<"-----------------------"<<endl;
    this->mouse->printDescripcion();
}