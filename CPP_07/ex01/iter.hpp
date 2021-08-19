/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:33:06 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/19 16:50:02 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

// template <class T>
// void print(T &a)
// {
// 	std::cout << a << "\t";
// }

template <class T>
void plusOne(T &a)
{
	a += 1;
}

// ---------------------------------------------------------------
// ********* for checklist *********

class Awesome
{
public:
	Awesome( void ) : _n( 42 ) {}
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< class T >
void print( T & x )
{
	std::cout << x << std::endl;
	return;
}
// ---------------------------------------------------------------

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
