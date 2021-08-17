#include <string>
#include "iter.hpp"

void intInc(int &val) {
    val++;
}

int main() {
    int* arr = new int[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    iter(arr,10, iterPrint);
    iter(arr,10, intInc);
    iter(arr,10, iterPrint);
    delete[] arr;
}