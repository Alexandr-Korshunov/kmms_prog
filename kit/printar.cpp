#include <iostream>
#include "printar.h"
namespace kaa {

    void printarray(int m[], int size) {

        for (int i = 0; i < size; i++) {
            std::cout << m[i] << " ";
        }

        std::cout << std::endl;
    }


}
