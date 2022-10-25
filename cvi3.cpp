#include <iostream>

int main() {

    int pole[10] = {1,2,3,4,5,6,7,8,9,10};
    pole[0] = 5;

    int * ukazatel;
    ukazatel = &(pole[4]);

    for (int i= 0; i < 10; ++i) {
        std::cout << pole[i] << "\n";
        std::cout << *(ukazatel+1) << "\n";
    }




    return 0;
}
