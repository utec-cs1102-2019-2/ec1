#ifndef SESSION10A_MOUSE_H
#define SESSION10A_MOUSE_H

#include <vector>
using namespace std;
class Mouse {
private:
    vector<int> color{ 10, 20, 30 };
    double precision = 0.54;

public:
    void printDescripcion();
};

#endif //SESSION10A_MOUSE_H
