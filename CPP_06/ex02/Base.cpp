#include "Base.hpp"

void A::sound() {
	std::cout << "AAA" << std::endl;
}

void B::sound() {
	std::cout << "BBB" << std::endl;
}

void C::sound() {
	std::cout << "CCC" << std::endl;
}

Base* generate(void) {
	int randNum;

	randNum = rand() % 3;
	if (randNum == 0) {
		std::cout << "A born." << std::endl;
		return (new A());
	}
	else if (randNum == 1) {
		std::cout << "B born." << std::endl;
		return (new B());
	}
	else if (randNum == 2) {
		std::cout << "C born." << std::endl;
		return (new C());
	}
	else {
		std::cerr << "Error." << std::endl;
		return (NULL);
	}
}

void identify(Base* p) {
	A* ptr_A;
	B* ptr_B;
	C* ptr_C;

	if ((ptr_A = dynamic_cast<A*>(p))) {
		ptr_A->sound();
	} else if ((ptr_B = dynamic_cast<B*>(p))) {
		ptr_B->sound();
	} else if ((ptr_C = dynamic_cast<C*>(p))) {
		ptr_C->sound();
	}
}

void identify(Base& p) {
	try {
		A ref_A = dynamic_cast<A&>(p);
		ref_A.sound();
	} catch (std::exception &e) {
	}
	try {
		B ref_B = dynamic_cast<B&>(p);
		ref_B.sound();
	} catch (std::exception &e) {
	}
	try {
		C ref_C = dynamic_cast<C&>(p);
		ref_C.sound();
	} catch (std::exception &e) {
	}
}
