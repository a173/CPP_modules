//
// Created by Allegra Caryn on 4/18/21.
//

#include "phonebook.hpp"

Phonebook::Phonebook(void) {
}

Phonebook::~Phonebook(void) {
}

int			Phonebook::count = 0;

void		Phonebook::add(void) {
	std::string buf;

	std::cout << "Add new contact" << std::endl;
	std::cout << "Your first name: ";
	std::cin >> buf;
	setInformation(buf, "first");
	std::cout << "Your last name: ";
	std::cin >> buf;
	setInformation(buf, "last");
	std::cout << "Your nickname: ";
	std::cin >> buf;
	setInformation(buf, "nick");
	std::cout << "Your login: ";
	std::cin >> buf;
	setInformation(buf, "login");
	std::cout << "Your address: ";
	std::cin >> buf;
	setInformation(buf, "address");
	do {
		std::cout << "Your email: ";
		std::cin >> buf;
		if (buf.find("@") == std::string::npos || buf.find("@") == buf.length() - 1 || !buf.find("@"))
			std::cout << "No valid email address, retry please" << std::endl;
		else
			setInformation(buf, "email");
	} while (buf.find("@") == std::string::npos || buf.find("@") == buf.length() - 1 || !buf.find("@"));
	std::cout << "Your phone number: ";
	std::cin >> buf;
	setInformation(buf, "phone");
	std::cout << "Your birthday date: ";
	std::cin >> buf;
	setInformation(buf, "birthday");
	std::cout << "Your favorite meal: ";
	std::cin >> buf;
	setInformation(buf, "meal");
	std::cout << "Your underwear color: ";
	std::cin >> buf;
	setInformation(buf, "underwear");
	std::cout << "Your darkest secret: ";
	std::cin >> buf;
	setInformation(buf, "secret");
	std::cout << "Done! Thanks!" << std::endl;
	Phonebook::count++;
}

void		Phonebook::search(void) const{
	int i;
	std::string buf;

	i = -1;
	std::cout.width(10);
	std::cout << std::right << _getIndex() << "|";
	buf = getInformation("first");
	if (buf.length() > 10)
		buf = buf.substr(0, 9) + ".";
	std::cout.width(10);
	std::cout << std::right << buf << "|";
	buf = getInformation("last");
	if (buf.length() > 10)
		buf = buf.substr(0, 9) + ".";
	std::cout.width(10);
	std::cout << std::right << buf << "|";
	buf = getInformation("nick");
	if (buf.length() > 10)
		buf = buf.substr(0, 9) + ".";
	std::cout.width(10);
	std::cout << std::right << buf << "|" << std::endl;
}

void 		Phonebook::allInformation() const{
	std::cout << "All information contact" << std::endl;
	std::cout << "first name: ";
	std::cout << getInformation("first") << std::endl;
	std::cout << "last name: ";
	std::cout << getInformation("last") << std::endl;
	std::cout << "nickname: ";
	std::cout << getInformation("nick") << std::endl;
	std::cout << "login: ";
	std::cout << getInformation("login") << std::endl;
	std::cout << "post address: ";
	std::cout << getInformation("address") << std::endl;
	std::cout << "email address: ";
	std::cout << getInformation("email") << std::endl;
	std::cout << "phone number: ";
	std::cout << getInformation("phone") << std::endl;
	std::cout << "birthday date: ";
	std::cout << getInformation("birthday") << std::endl;
	std::cout << "favorite meal: ";
	std::cout << getInformation("meal") << std::endl;
	std::cout << "underwear color: ";
	std::cout << getInformation("underwear") << std::endl;
	std::cout << "darkest secret: ";
	std::cout << getInformation("secret") << std::endl;
}

void		Phonebook::setInformation(std::string inf, std::string to) {
	this->_i = Phonebook::count + 1;
	if (!to.compare("first"))
		this->_first_name = inf;
	else if (!to.compare("last"))
		this->_last_name = inf;
	else if (!to.compare("nick"))
		this->_nick_name = inf;
	else if (!to.compare("login"))
		this->_login = inf;
	else if (!to.compare("address"))
		this->_address = inf;
	else if (!to.compare("email"))
		this->_email = inf;
	else if (!to.compare("phone"))
		this->_phone = inf;
	else if (!to.compare("birthday"))
		this->_birthday = inf;
	else if (!to.compare("meal"))
		this->_favorite_meal = inf;
	else if (!to.compare("underwear"))
		this->_underwear_color = inf;
	else if (!to.compare("secret"))
		this->_darkest_secret = inf;
}

int 		Phonebook::_getIndex() const{
	return this->_i;
}

std::string	Phonebook::getInformation(std::string to) const{
	if (!to.compare("first"))
		return this->_first_name;
	else if (!to.compare("last"))
		return this->_last_name;
	else if (!to.compare("nick"))
		return this->_nick_name;
	else if (!to.compare("login"))
		return this->_login;
	else if (!to.compare("address"))
		return this->_address;
	else if (!to.compare("email"))
		return this->_email;
	else if (!to.compare("phone"))
		return this->_phone;
	else if (!to.compare("birthday"))
		return this->_birthday;
	else if (!to.compare("meal"))
		return this->_favorite_meal;
	else if (!to.compare("underwear"))
		return this->_underwear_color;
	return this->_darkest_secret;
}
