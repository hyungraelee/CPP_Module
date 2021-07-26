/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:36:40 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:36:41 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeSign;
	const int			gradeExecute;
	Form() : name("no name"), gradeSign(1), gradeExecute(1) {}

public:
	Form(std::string name, int gradeSign, int gradeExecute);
	~Form();
	Form(const Form&);
	Form& operator=(const Form&);

	const std::string &getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExecute() const;

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
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
