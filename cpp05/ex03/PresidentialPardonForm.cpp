//
// Created by Allegra Caryn on 4/25/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) : Form(a) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &s) : Form("PresidentialPardonForm", 25, 5), _target(s) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm&) { return *this; }

PresidentialPardonForm::~PresidentialPardonForm() {}

bool PresidentialPardonForm::execute(const Bureaucrat &a) const {
	if (Form::execute(a) == 1)
		return announce();
	return false;
}

const std::string &PresidentialPardonForm::getTarget() const {
	return _target;
}

bool PresidentialPardonForm::announce() const {
	std::cout << _target << " был(a/o) помилован Зафордом Библброксом." << std::endl;
	return true;
}