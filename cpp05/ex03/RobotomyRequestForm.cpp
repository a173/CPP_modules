//
// Created by Allegra Caryn on 4/25/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : Form(a) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &s) : Form("RobotomyRequestForm", 25, 5), _target(s) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm&) { return *this; }

RobotomyRequestForm::~RobotomyRequestForm() {}

bool RobotomyRequestForm::execute(const Bureaucrat &a) const {
	if (Form::execute(a) == 1)
		return announce();
	return false;
}

const std::string &RobotomyRequestForm::getTarget() const {
	return _target;
}

bool RobotomyRequestForm::announce() const {
	std::string str[2];
	str[0] = "bzzzbzbzbzbzz 01010110101110........ " + _target + " был(a/o) успешно роботизирован.";
	str[1] = "bzzzbzbzbzbzz 01010110101110.................. роботизация " + _target + " была провалена.";
	std::cout << str[std::rand() % 2] << std::endl;
	return true;
}