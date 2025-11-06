#include <iostream>
#include <vector>
#include "input.h"
#include "sort.h"
#include "output.h"

int main() {
    std::vector<int> numb = inputq();
    bsort(numb);
    printar(numb);
    return 0;
}