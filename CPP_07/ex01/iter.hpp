#ifndef ITER_HPP
# define ITER_HPP

template <class T>
void print(T &a)
{
	std::cout << a << "\t";
}

template <class T>
void plusOne(T &a)
{
	a += 1;
}

template <class T>
void iter(T *arrPtr, unsigned int len, void (*func)(T &a))
{
	if (arrPtr == NULL || len == 0 || func == NULL)
		return ;
	for (unsigned int i = 0; i < len; i++) {
		func(arrPtr[i]);
	}
}

#endif
