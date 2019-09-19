#include <iostream>

void pedir_notas(float &a, float &b);

int main() {
    std::cout << "Hello, World!" << std::endl;
    float pc1 = 0.0;
    float bonus = 0.0;
    pedir_notas(pc1, bonus);
    std::cout << pc1 << "\t" << bonus <<std::endl;
    //Implementa aqui los punteros
    float *ptr_pc1 = &pc1;
    *ptr_pc1 = pc1 + bonus;
    std::cout << *ptr_pc1;
    return 0;
}

void pedir_notas(float &a, float &b){
    std::cin >> a;
    std::cin >> b;
    return;
}