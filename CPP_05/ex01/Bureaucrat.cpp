#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	this->grade = grade;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName()) {
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->grade = other.getGrade();
	return (*this);
}

const std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
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

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
