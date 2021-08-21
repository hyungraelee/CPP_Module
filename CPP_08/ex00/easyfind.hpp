/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:57:18 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/21 15:57:19 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class FailToFindException : public std::exception {
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
		throw FailToFindException();
	return (it);
}

#endif
