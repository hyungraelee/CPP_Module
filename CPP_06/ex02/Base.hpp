/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:03:11 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/18 17:30:57 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base
{
public:
	virtual ~A() {}
	void sound();
};

class B : public Base
{
public:
	virtual ~B() {}
	void sound();
};

class C : public Base
{
public:
	virtual ~C() {}
	void sound();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
