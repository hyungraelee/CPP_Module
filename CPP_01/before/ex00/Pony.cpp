#include "Pony.hpp"

Pony::~Pony(void) {
	std::cout << _name << " : Bye~~~ :)" << std::endl;
}

void	Pony::SetName(std::string name) {
	_name = name;
}

void	Pony::SetColor(std::string color) {
	_color = color;
}

void	Pony::SetCry(std::string cry) {
	_cry = cry;
}

void	Pony::SetAge(int age) {
	_age = age;
}

void	Pony::SpeakName(void) {
	std::cout << _name << " : My name is " << _name << '.' << std::endl;
}

void	Pony::SpeakColor(void) {
	std::cout << _name << " : My hair is " << _color << '.' << std::endl;
}

void	Pony::Cry(void) {
	std::cout << _name << " : " << _cry << '.' << std::endl;
}

void	Pony::SpeakAge(void) {
	std::cout << _name << " : I'm " << "_age" << " years old." << std::endl;
}
