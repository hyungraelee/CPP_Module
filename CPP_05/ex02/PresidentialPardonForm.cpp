#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other.getName(), other.getGradeSign(), other.getGradeExecute()) {
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	this->Form::operator=(other);
	this->setTarget(other.getTarget());
	return (*this);
}

void PresidentialPardonForm::action(Bureaucrat const & executor) const {
	execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
