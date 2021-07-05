#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*msg1 = &str;
	std::string	&msg2 = str;

	std::cout << *msg1 << std::endl;
	std::cout << msg2 << std::endl;
	return (0);
}
