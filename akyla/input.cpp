#include "input.h"
#include <iostream>
#include <vector>


	//input
	std::vector<int> inputq(){
	int n;
	int a;
	std::cout << "Введите количество элементов: ";
	std::cin >> n;

	std::vector<int> vec(n);
	std::cout << "ВВедите эл-ты: \n";
	for (int i = 0; i < n; ++i) {
		std::cin >> a;
		vec.push_back(a);
	}
	return vec;
}