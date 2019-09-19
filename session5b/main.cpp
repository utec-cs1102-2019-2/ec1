#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a = 5;
    int *ptr = &a;
    *ptr = 10;
    std::cout<<a;
    return 0;
}