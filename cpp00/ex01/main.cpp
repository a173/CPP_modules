#include "phonebook.hpp"

static void	print(Phonebook contact[8], int i) {
	std::string buf;

	std::cout.width(10);
	std::cout << std::right << "Index" << "|";
	std::cout.width(10);
	std::cout << std::right << "first name" << "|";
	std::cout.width(10);
	std::cout << std::right << "last name" << "|";
	std::cout.width(10);
	std::cout << std::right << "nickname" << "|" << std::endl;
	while (++i < Phonebook::count)
		contact[i].search();
	std::cout << "Enter contact index or exit: ";
	std::cin >> buf;
	if (!buf.compare("EXIT") || !buf.compare("exit"))
		return;
	else if (std::stoi(buf) > Phonebook::count || std::stoi(buf) == 0)
		std::cout << "ERROR!!!111!!!1!1!!!" << std::endl;
	else
		contact[std::stoi(buf) - 1].allInformation();
}

int			main() {
	std::string	str;
	Phonebook	contact[8];

	do {
		std::cout << "Enter command (add/search/exit)" << std::endl;
		std::cin >> str;
		if (!str.compare("add") || !str.compare("ADD")) {
			if (Phonebook::count == 8)
				std::cout << "Phonebooks overload." << std::endl;
			else
				contact[Phonebook::count].add();
		}
		else if (!str.compare("search") || !str.compare("SEARCH")) {
			if (Phonebook::count == 0)
				std::cout << "Phonebooks is empty." << std::endl;
			else
				print(contact, -1);
		}
		else if (str.compare("exit") && str.compare("EXIT")) {
			std::cout << "ERROR!!!111!!!1!1!!!";
			str = "exit";
		}
	} while (str.compare("EXIT") && str.compare("exit"));
	return 0;
}
