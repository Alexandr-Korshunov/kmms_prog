#include <iostream>
#include "printar.h"
#include "sort.h"

int main() {
    int m[] = { -2, 7, 0, 52, 26, 0, 6, 0, 7 };
    const int size = sizeof(m) / sizeof(m[0]);

    std::cout << "Исходный массив: ";
    kaa::printarray(m, size);

    kaa::sort(m, size);

    std::cout << "Отсортированный массив: ";
    kaa::printarray(m, size);

    return 0;
}