/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:32:53 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/19 15:32:54 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

class Awesome {
public:
	Awesome( int n = 1 ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
	int get_n() { return (this->_n); }

private:
	int _n;
};

class Circle
{
	int radius;

public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return (this->radius); }
};

int main()
{
	int a = 2, b = 4;
	double c = 1.4, d = 4.2;
	std::string str1 = "aaa1", str2 = "aaa2";
	Circle donut(5), pizza(10);
	Awesome t1(42), t2(84);

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "test SWAP" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	::swap(a, b);
	std::cout << "a : " << a << ", b : " << b << std::endl;
	std::cout << "c : " << c << ", d : " << d << std::endl;
	::swap(c, d);
	std::cout << "c : " << c << ", d : " << d << std::endl;
	std::cout << "str1 : " << str1 << ", str2 : " << str2 << std::endl;
	::swap(str1, str2);
	std::cout << "str1 : " << str1 << ", str2 : " << str2 << std::endl;
	std::cout << "donut : " << donut.getRadius() << ", pizza : " << pizza.getRadius() << std::endl;
	::swap(donut, pizza);
	std::cout << "donut : " << donut.getRadius() << ", pizza : " << pizza.getRadius() << std::endl;
	std::cout << "t1 : " << t1.get_n() << ", t2 : " << t2.get_n() << std::endl;
	::swap(t1, t2);
	std::cout << "t1 : " << t1.get_n() << ", t2 : " << t2.get_n() << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "test MIN" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	std::cout << "min value : " << ::min(a, b) << std::endl;
	std::cout << "c : " << c << ", d : " << d << std::endl;
	std::cout << "min value : " << ::min(c, d) << std::endl;
	std::cout << "str1 : " << str1 << ", str2 : " << str2 << std::endl;
	std::cout << "min value : " << ::min(str1, str2) << std::endl;
	std::cout << "t1 : " << t1.get_n() << ", t2 : " << t2.get_n() << std::endl;
	std::cout << "min value : " << ::min(t1, t2).get_n() << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	std::cout << "test MAX" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	std::cout << "max value : " << ::max(a, b) << std::endl;
	std::cout << "c : " << c << ", d : " << d << std::endl;
	std::cout << "max value : " << ::max(c, d) << std::endl;
	std::cout << "str1 : " << str1 << ", str2 : " << str2 << std::endl;
	std::cout << "max value : " << ::max(str1, str2) << std::endl;
	std::cout << "t1 : " << t1.get_n() << ", t2 : " << t2.get_n() << std::endl;
	std::cout << "max value : " << ::max(t1, t2).get_n() << std::endl;

	std::cout << "-------------------------------------" << std::endl;

	return (0);
}
