#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	int	ivalue1 = 2, ivalue2 = 5, ivalue3 = 15;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	std::cout << "-------------------------------------" << std::endl;

	for (int i = 0; i < (int)vec.size(); i++) {
		std::cout << vec[i] << ' ';
	}
	std::cout << std::endl;

	std::vector<int>::iterator it;

	try {
		easyfind(vec, ivalue1);
		std::cout << "find: " << ivalue1 << std::endl;
		easyfind(vec, ivalue2);
		std::cout << "find: " << ivalue2 << std::endl;
		easyfind(vec, ivalue3);
		std::cout << "find: " << ivalue3 << std::endl;
	} catch (std::runtime_error &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	return (0);
}
