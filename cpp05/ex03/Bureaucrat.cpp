//
// Created by Allegra Caryn on 4/25/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & a) { *this = a; }

Bureaucrat::Bureaucrat(const std::string & name, int class_) : _name(name), _class(class_) {
	if (_class > 150)
		throw GradeTooLowException(getName() + ": Задан слишком низкий уровень доступа при создании Бюрократа!");
	else if (_class < 1)
		throw GradeTooHighException(getName() + ": Задан слишком высокий уровень доступа при создании Бюрократа!");
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat & a) {
	_name = a._name;
	_class = a._class;
	return *this;
}

std::string	Bureaucrat::getName() const { return _name; }

int			Bureaucrat::getClass() const { return _class; }

void		Bureaucrat::upClass(int n) {
	try {
		if (_class - n < 1)
			throw  GradeTooHighException(_name + " не может быть классом выше 1");
		_class -= n;
	}
	catch (GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
}

void		Bureaucrat::lowClass(int n) {
	try {
		if (_class + n > 150)
			throw GradeTooHighException(_name + " не может быть классом ниже 150");
		_class += n;
	}
	catch (GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signing(Form &a) const {
	try {
		if (_class > a.getGradeSign())
			throw GradeTooLowException(_name + " не может подписать " + a.getTitle() + " так как для подписания формы требуется " + \
				std::to_string(a.getGradeSign()) + " уровень доступа.\nУровень доступа " + _name + " " + std::to_string(_class));
		if (a.getValid() == 0) {
			a.setValid(1);
			std::cout << _name << " подписал " << a.getTitle() << std::endl;
		}
		else
			std::cout << "Документ " << a.getTitle() << " уже подписан!" << std::endl;
	}
	catch (GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::execute(Form &a) const {
	try {
		if (a.getValid() == 0)
			throw GradeTooLowException(_name + " не может выполнить распоряжение " + a.getTitle() + " так как распоряжение не подписано");
		else if (_class > a.getGradeExec())
			throw GradeTooLowException(_name + " не может выполнить распоряжение " + a.getTitle() + " так как требуется " + \
				std::to_string(a.getGradeExec()) + " уровень доступа. Уровень доступа " + _name + " " + std::to_string(_class));
		if (a.getValid() == 1) {
			std::cout << _name << " выполняет распоряжение " << a.getTitle() << std::endl;
			a.execute(*this);
		}
	}
	catch (GradeTooLowException &e) {
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