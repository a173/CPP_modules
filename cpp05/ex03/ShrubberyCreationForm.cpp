//
// Created by Allegra Caryn on 4/25/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : Form(a) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &s) : Form("ShrubberyCreationForm", 25, 5), _target(s) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) { return *this; }

ShrubberyCreationForm::~ShrubberyCreationForm() {}

bool ShrubberyCreationForm::execute(const Bureaucrat &a) const {
	if (Form::execute(a) == 1)
		return announce();
	return false;
}

const std::string &ShrubberyCreationForm::getTarget() const {
	return _target;
}

bool ShrubberyCreationForm::announce() const {
	std::ofstream ofs(_target + "_shrubbery");
	ofs << "            *            " << std::endl;
	ofs << "          *****          " << std::endl;
	ofs << "        *********        " << std::endl;
	ofs << "         *******         " << std::endl;
	ofs << "       ***********       " << std::endl;
	ofs << "     ***************     " << std::endl;
	ofs << "      *************      " << std::endl;
	ofs << "    *****************    " << std::endl;
	ofs << "  *********************  " << std::endl;
	ofs << "|||||||||||||||||||||||||" << std::endl;
	ofs << "           | |           " << std::endl;
	ofs << "~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	if (!ofs)
		throw GradeTooLowException("Ошибка создания файла " + _target + "_shrubbery");
	ofs.close();
	return true;
}
