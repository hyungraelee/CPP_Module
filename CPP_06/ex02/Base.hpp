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
