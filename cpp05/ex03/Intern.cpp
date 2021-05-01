//
// Created by Allegra Caryn on 4/25/21.
//

#include "Intern.hpp"

Form*	makeRobotomy(const std::string &title) {
	return	(new RobotomyRequestForm(title));
}

Form*	makePresidentialPardon(const std::string &title) {
	return	(new PresidentialPardonForm(title));
}

Form*	makeShrubberyCreation(const std::string &title) {
	return	(new ShrubberyCreationForm(title));
}

Intern::Intern() {
	 _t_form[0].str = "robotomy request";
	 _t_form[1].str = "presidential pardon request";
	 _t_form[2].str = "shruberry creation request";
	 _t_form[0].createForm = &makeRobotomy;
	 _t_form[1].createForm = &makePresidentialPardon;
	 _t_form[2].createForm = &makeShrubberyCreation;
}

Intern::Intern(const Intern &a) { *this = a; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &) { return *this; }

Form* Intern::makeForm(const std::string &to, const std::string &title) {
//	_t_form[0].str = "robotomy request";
//	_t_form[1].str = "presidential pardon request";
//	_t_form[2].str = "shruberry creation request";
//	_t_form[0].createForm = new RobotomyRequestForm(title);
//	_t_form[1].createForm = new PresidentialPardonForm(title);
//	_t_form[2].createForm = new ShrubberyCreationForm(title);

	try {
		std::cout << "Создаю форму " << to << " с названием " << title << std::endl;
		for (int i = 0; i < 3; i++)
			if (!to.compare(_t_form[i].str)) {
				std::cout << "Создана форма " << to << " с названием " << title << std::endl;
//				for (int j = 0; j < 3; j++)
//					if (j != i)
//						delete _t_form[j].createForm;
//				return _t_form[i].createForm;
				return _t_form[i].createForm(title);
			}
		throw FormException();
	}
	catch (FormException &e) {
		std::cout << e.what() << std::endl;
	}
	return NULL;
}

Intern::FormException::FormException() {}

Intern::FormException::~FormException() throw() {}

const char *Intern::FormException::what() const throw() {
	return "Неизвестная форма!";
}
