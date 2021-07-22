#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other.getName(), other.getGradeSign(), other.getGradeExecute()) {
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	this->Form::operator=(other);
	this->setTarget(other.getTarget());
	return (*this);
}

void RobotomyRequestForm::action(Bureaucrat const & executor) const {
	execute(executor);
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->getTarget() << " fail to be robotomized." << std::endl;
}
