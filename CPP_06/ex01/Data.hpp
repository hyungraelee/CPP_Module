#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

typedef struct	s_Data {
	int			iValue;
	std::string	strValue;
	float		fValue;
}				Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
