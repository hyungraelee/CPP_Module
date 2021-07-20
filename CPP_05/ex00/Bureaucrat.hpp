#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

private:
	const std::string name;
	int grade;
	Bureaucrat() : name("no name") {}

public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);

	const std::string &getName() const;
	int getGrade() const;
	void incrementGrade(int amount);
	void decrementGrade(int amount);

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

std::ostream& operator<<(std::ostream &out, const Bureaucrat& bureaucrat);

#endif
