#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class FailToFineException : public std::exception {
	public :
		virtual const char* what() const throw() {
			return ("Fail to find!");
		}
};

template <typename T>
typename T::iterator easyfind(T container, int ivalue) {
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), ivalue);
	if (it == container.end())
		throw FailToFineException();
	return (it);
}

#endif
