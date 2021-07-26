/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:39:00 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:39:01 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Form {

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeSign;
	const int			gradeExecute;
	std::string			target;
	Form() : name("no name"), gradeSign(1), gradeExecute(1) {}

public:
	Form(std::string name, int gradeSign, int gradeExecute);
	virtual ~Form();
	Form(const Form&);
	Form& operator=(const Form&);

	const std::string &getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	const std::string &getTarget() const;
	void setTarget(std::string);

	void beSigned(Bureaucrat& b);

	class GradeTooHighException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("Grade Too High");
			}
	};

	class GradeTooLowException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("Grade Too Low");
			}
	};

	class NoSignException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("No Sign");
			}
	};

	void checkStatus(Bureaucrat const & executor) const;
	virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
