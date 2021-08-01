#include <iostream>
#include "Data.hpp"

int main()
{
	{
		Data		orig;
		uintptr_t	serialKey;
		Data*		dest;

		orig.iValue = 42;
		orig.strValue = "seoul";
		orig.fValue = 42.42f;

		serialKey = serialize(&orig);
		dest = deserialize(serialKey);

		std::cout << "dest - ivalue:\t\t" << dest->iValue << std::endl;
		std::cout << "dest - strValue:\t" << dest->strValue << std::endl;
		std::cout << "dest - fvalue:\t\t" << dest->fValue << std::endl;
		delete dest;
	}
	system("leaks serialize");
	return (0);
}
