#include "Data.hpp"

uintptr_t serialize(Data *ptr) {
	char *raw = new char[sizeof(int) + ptr->strValue.size() + sizeof(float)];

	*(reinterpret_cast<int *>(raw)) = ptr->iValue;
	*(reinterpret_cast<std::string *>(raw + sizeof(int))) = ptr->strValue.c_str();
	*(reinterpret_cast<float *>(raw + sizeof(int) + ptr->strValue.size() + 1)) = ptr->fValue;

	return (reinterpret_cast<uintptr_t>(raw));
}

Data* deserialize(uintptr_t raw) {
	Data *deserial = new Data;
	char *ptr = reinterpret_cast<char *>(raw);

	deserial->iValue = *reinterpret_cast<int *>(ptr);
	deserial->strValue = *reinterpret_cast<std::string *>(ptr + sizeof(int));
	deserial->fValue = *reinterpret_cast<float *>(ptr + sizeof(int) + deserial->strValue.size() + 1);
	return (deserial);
}
