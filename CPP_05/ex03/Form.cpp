#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSign, int gradeExecute) : name(name), gradeSign(gradeSign), gradeExecute(gradeExecute) {
	this->isSigned = false;
}

Form::~Form() {
}

Form::Form(const Form& f) : name(f.getName()), gradeSign(f.getGradeSign()), gradeExecute(f.getGradeExecute()) {
	*this = f;
}

Form& Form::operator=(const Form& f) {
	this->isSigned = f.getSigned();
	return (*this);
}

const std::string &Form::getName() const {
	return (this->name);
}

bool Form::getSigned() const {
	return (this->isSigned);
}

int Form::getGradeSign() const {
	return (this->gradeSign);
}

int Form::getGradeExecute() const {
	return (this->gradeExecute);
}

const std::string &Form::getTarget() const {
	return (this->target);
}

void Form::setTarget(std::string target) {
	this->target = target;
}

void Form::beSigned(Bureaucrat& b) {
	if (b.getGrade() < this->getGradeSign())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const {
	if (!this->isSigned)
		throw NoSignException();
	if (this->gradeExecute < executor.getGrade())
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << ", SignGrade: " << form.getGradeSign() << ", ExecuteGrade: " << form.getGradeExecute() << ", IsSigned? " << form.getSigned();
	return (out);
}
