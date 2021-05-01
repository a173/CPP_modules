//
// Created by Allegra Caryn on 4/18/21.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>

class Phonebook {
	private:
		int			_i;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_login;
		std::string	_address;
		std::string	_email;
		std::string	_phone;
		std::string	_birthday;
		std::string	_favorite_meal;
		std::string	_underwear_color;
		std::string	_darkest_secret;
		int 		_getIndex() const;

	public:
		static int	count;

		Phonebook(void);
		~Phonebook(void);
		void		add(void);
		void		search(void) const;
		void		setInformation(std::string inf, std::string to);
		void 		allInformation() const;
		std::string getInformation(std::string to) const;
};

#endif //PHONEBOOK_HPP
