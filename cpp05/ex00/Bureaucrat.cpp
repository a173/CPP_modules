//
// Created by Allegra Caryn on 4/25/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & a) { *this = a; }

Bureaucrat::Bureaucrat(const std::string & name, int class_) : _name(name), _class(class_) {
	if (_class > 150)
		throw GradeTooLowException("Задан слишком низкий уровень доступа при создании Бюрократа!");
	else if (_class < 1)
		throw GradeTooHighException("Задан слишком высокий уровень доступа при создании Бюрократа!");
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat & a) {
	_name = a._name;
	_class = a._class;
	return *this;
}

std::string	Bureaucrat::getName() const { return _name; }

int			Bureaucrat::getClass() const { return _class; }

void		Bureaucrat::upValid(int n) {
	if (_class - n < 1)
		throw  GradeTooHighException(_name + " не может быть классом выше 1");
	else
		_class -= n;
}

void		Bureaucrat::upClass(int n) {
	try {
		upValid(n);
	}
	catch (GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::lowValid(int n) {
	if (_class + n > 150)
		throw GradeTooHighException(_name + " не может быть классом ниже 150");
	else
		_class += n;
}

void		Bureaucrat::lowClass(int n) {
	try {
		lowValid(n);
	}
	catch (GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string const &str) : _str(str) {}

const char *Bureaucrat::GradeTooLowException::what() const throw() { return _str.c_str();}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string const &str) : _str(str) {}

const char *Bureaucrat::GradeTooHighException::what() const throw() { return _str.c_str(); }

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &form) {
	os << "Бюрократ: " << form.getName() << ", уровень доступа: " << form.getClass();
	return os;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &form);
