#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T container, int ivalue) {
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), ivalue);
	if (it == container.end())
		throw std::runtime_error("Error.");
	return (it);
}

#endif
