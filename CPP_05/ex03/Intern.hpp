#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

public:
	Intern();
	~Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);

	Form *makeShrubberyForm(std::string target);
	Form *makeRototoForm(std::string target);
	Form *makePresidentForm(std::string target);
	Form *makeForm(std::string name, std::string target);

	class NoNameException : public std::exception {
		public :
			virtual const char* what() const throw() {
				return ("No Form match the name.");
			}
	};
};

#endif
