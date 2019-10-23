#ifndef SESSION10A_LABORATORIO_H
#define SESSION10A_LABORATORIO_H

#include "Computadora.h"
#include <vector>
using  namespace std;
class Laboratorio {
private:
    vector<Computadora> computadoras;
public:
    void agregarComputadora(Computadora &c);
};

#endif //SESSION10A_LABORATORIO_H
