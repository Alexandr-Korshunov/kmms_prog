#include <iostream>
#include <string>

int main() {
	 int k = 5;
	 std::cout <<"Введите приветсвие: ";
	 std::string str;
	 std::getline(std::cin, str);
	 std::cout << str << std::endl;
}