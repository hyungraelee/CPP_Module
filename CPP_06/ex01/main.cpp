#include <iostream>
#include "Data.hpp"

int main()
{
	uintptr_t	serialKey;
	{
		Data		orig;

		orig.iValue = 42;
		orig.strValue = "seoul";
		orig.fValue = 42.42f;

		serialKey = serialize(&orig);
	}
	{
		Data*		dest;

		dest = deserialize(serialKey);

		std::cout << "dest - ivalue:\t\t" << dest->iValue << std::endl;
		std::cout << "dest - strValue:\t" << dest->strValue << std::endl;
		std::cout << "dest - fvalue:\t\t" << dest->fValue << std::endl;
		delete dest;
	}
	system("leaks serialize");
	return (0);
}