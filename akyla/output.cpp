//output
#include "output.h"
#include <iostream>
#include <vector>
void printar(const std::vector<int>& vec) {
std::cout << "Отсортированный вектор";
int n;
n=vec.size();
for (int i = 0; i < n; ++i) {
	std::cout << vec[i] << " ";
}
std::cout << std::endl;
}