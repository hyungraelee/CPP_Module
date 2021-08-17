#include <iostream>
#include "iter.hpp"

int main()
{
	int a[] = {0, 1, 2, 3, 4};

	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Test type INT" << std::endl;
	::iter(a, 5, ::print<int>);
	std::cout << std::endl;
	::iter(a, 5, ::plusOne<int>);
	::iter(a, 5, ::print<int>);
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	std::cout << "Test type FLOAT" << std::endl;
	float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	::iter(b, 5, ::print<float>);
	std::cout << std::endl;
	::iter(b, 5, ::plusOne<float>);
	::iter(b, 5, ::print<float>);
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Test type CHAR" << std::endl;
	char c[] = {'a', 'b', 'c', 'd', 'e'};
	::iter(c, 5, ::print<char>);
	std::cout << std::endl;
	::iter(c, 5, ::plusOne<char>);
	::iter(c, 5, ::print<char>);
	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;

	return (0);
}
