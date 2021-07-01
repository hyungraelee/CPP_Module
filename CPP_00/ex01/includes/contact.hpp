#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact {
	private :
		std::string	firstname[8];
		std::string	lastname[8];
		std::string	nickname[8];
		std::string	login[8];
		std::string	postal_address[8];
		std::string	email_address[8];
		std::string	phone_number[8];
		std::string	birthday_date[8];
		std::string	favorite_meal[8];
		std::string	underwear_color[8];
		std::string	darkest_secret[8];
		int			num;
	public :
		Contact();
		int	GetNum();
		int	Add();
		int	ShowTable();
		int	ShowAll(int);
		~Contact();
};

#endif
