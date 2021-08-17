#include <string>
#include "templates.cpp"
# include <iostream>

int main() {
    Array<int> *a1 = new Array<int>(static_cast<int>(10));
    Array<int> *a2 = new Array<int>();
    a2[0] = 0;
    for (int i = 0; i < static_cast<int>(a1->getSize()); i++)
        a1[static_cast<unsigned int>(i)] = i;
    for (int i = 0; i < static_cast<int>(a1->getSize()); i++)
        std::cout << a1[i] << std::endl;
}