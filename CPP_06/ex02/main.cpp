#include <iostream>
#include "Base.hpp"

int main()
{
	{
		srand(time(NULL));

		Base* randBase = generate();
		identify(randBase);
		identify(*randBase);
		delete randBase;
	}
	system("leaks realtype");
	return (0);
}
