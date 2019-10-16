#include <iostream>
#include "Triangulo.h"
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    cout << "Hello, Alvaro!" << endl;
    decimal lado1, lado2, lado3;
    for(int i=0; i<1000; i++){
        lado1 = rand()%10;
        lado2 = rand()%10;
        lado3 = rand()%10;
        Triangulo *t = new Triangulo(lado1, lado2, lado3);
        cout<< "\t"<< t->area()<<endl;
    }

    return 0;
}