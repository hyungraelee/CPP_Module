/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:36:37 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:36:38 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void Form::beSigned(Bureaucrat& b) {
	if (b.getGrade() < this->getGradeSign())
		this->isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, const Form& form) {
	out << form.getName() << ", SignGrade: " << form.getGradeSign() << ", ExecuteGrade: " << form.getGradeExecute() << ", IsSigned? " << form.getSigned() << std::endl;
	return (out);
}
