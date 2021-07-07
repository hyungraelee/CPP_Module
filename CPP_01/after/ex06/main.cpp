#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	Karen	karen;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	level;
	for (level = 0 ; level < 4 ; ++level)
	{
		if (argv[1] == levels[level])
			break ;
	}
	switch (level)
	{
	case DEBUG:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
	case INFO:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
	case WARNING:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
	case ERROR:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
	return (0);
}
