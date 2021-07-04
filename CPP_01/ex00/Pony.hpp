#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony {
	private :
		std::string	_name;
		std::string	_color;
		std::string	_cry;
		int			_age;
	public :
		// Pony();
		~Pony();
		void	SetName(std::string);
		void	SetColor(std::string);
		void	SetCry(std::string);
		void	SetAge(int);
		void	SpeakName(void);
		void	SpeakColor(void);
		void	Cry(void);
		void	SpeakAge(void);
};

#endif
