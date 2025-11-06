#include <iostream>
#include <vector>

 void man() {

	//input
	int n;
	std::cout << "Введите количество элементов: ";
	std::cin >> n;

	std::vector<int> vec(n);
	std::cout << "ВВедите эл-ты: \n";
	for (int i = 0; i < n; ++i) {
		std::cin >> vec[i];
	}


	//sort
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (vec[j] > vec[j + 1]) {
				int t = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = t;
			}
		}
	}

	//output
	std::cout << "Отсортированный вектор";
	for (int i = 0; i < n; ++i) {
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;
}