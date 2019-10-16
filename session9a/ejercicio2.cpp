#include <iostream>
#include "Cilindro.h"
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    cout << "Hello, Alvaro!" << endl;
    for(int i=0; i<1000; i++){
        float radio = rand()%10;
        float altura = rand()%10;
        Cilindro *c= new Cilindro(radio, altura);
        cout<< "\t"<< c->volumen()<<endl;
        cout<< "\t"<< c->areaTotal()<<endl;
        cout<< "\t"<< c->areaLateral()<<endl;
    }

    return 0;
}
