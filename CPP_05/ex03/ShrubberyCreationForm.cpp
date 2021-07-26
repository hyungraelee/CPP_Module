/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:39:31 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:39:32 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other.getName(), other.getGradeSign(), other.getGradeExecute()) {
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	this->Form::operator=(other);
	this->setTarget(other.getTarget());
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	checkStatus(executor);
	std::ifstream fin("asciiTree.txt");

	if (fin.is_open()) {
		std::ofstream fout(this->getTarget() + "_shrubbery");
		if (!fout.is_open()) {
			throw std::ofstream::failure("Cannot open " + this->getTarget() + "_shrubbery file.");
		}
		std::string s;
		fin.seekg(0, std::ios::end);
		int size = fin.tellg();
		s.resize(size);
		fin.seekg(0, std::ios::beg);
		fin.read(&s[0], size);
		fout << s;
	}
	else
		throw std::ifstream::failure("Cannot open input file.");
}
