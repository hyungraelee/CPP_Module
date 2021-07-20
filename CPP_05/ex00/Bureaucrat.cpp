#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	this->grade = grade;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->grade = other.grade;
	return (*this);
}

const std::string &Bureaucrat::getName() const {
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::incrementGrade(int amount) {
	if (this->grade - amount < 1)
		throw GradeTooHighException();
	this->grade -= amount;
}

void Bureaucrat::decrementGrade(int amount) {
	if (this->grade + amount > 150)
		throw GradeTooLowException();
	this->grade += amount;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
