#include <iostream>
using namespace std;

int varGlobal = 20;
int main() {
    cout << "Ejercicio2" << endl;
    int *ptr_monton = nullptr;
    cout << ptr_monton << "\t" << &ptr_monton << endl;
    int *ptr_var = nullptr;

    int var = 20;
    ptr_var = &var;

    ptr_monton = new int();

    cout << ptr_monton << "\t" << &ptr_monton << "\t" << *ptr_monton << endl;

    *ptr_monton = 10;

    delete ptr_monton;
    cout << ptr_monton << "\t" << &ptr_monton << endl;
    return 0;
}
