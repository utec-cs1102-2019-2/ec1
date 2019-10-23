#ifndef SESSION10A_TECLADO_H
#define SESSION10A_TECLADO_H

#include <iostream>
using namespace std;

class Teclado {
private:
    string lang = "ES";
    string marca = "LENOVO";
public:
    string getDescripcion();
};

#endif //SESSION10A_TECLADO_H
