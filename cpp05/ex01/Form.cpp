//
// Created by Allegra Caryn on 4/25/21.
//

#include "Form.hpp"

Form::Form() : _gradeSign(1), _gradeExec(1) {}

Form::Form(const Form &a) : _title(a._title), _valid(a._valid), _gradeSign(a._gradeSign), _gradeExec(a._gradeExec) {}

Form::Form(const std::string &name, const int gradeSign, const int gradeExec) : _title(name), _valid(0), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	if (_gradeSign > 150)
		throw GradeTooLowException(getTitle() + ": Задан слишком низкий уровень доступа для подписи при создании формы!");
	else if (_gradeSign < 1)
		throw GradeTooHighException(getTitle() + ": Задан слишком высокий уровень доступа для подписи при создании формы!");
	else if (_gradeExec > 150)
		throw GradeTooLowException(getTitle() + ": Задан слишком низкий уровень доступа для выполнения при создании формы!");
	else if (_gradeExec < 1)
		throw GradeTooHighException(getTitle() + ": Задан слишком высокий уровень доступа для выполнения при создании формы!");
}

Form::~Form() {}

Form &Form::operator=(const Form &) { _valid = false; return *this; }

void Form::beSigned(const Bureaucrat &a) {
	a.signing(*this);
}

std::string Form::getTitle() const { return _title; }

bool Form::getValid() const { return _valid; }

int Form::getGradeSign() const { return _gradeSign; }

int Form::getGradeExec() const { return _gradeExec; }

void Form::setValid(int n) {
	_valid = n;
}

Form::GradeTooHighException::GradeTooHighException(const std::string &str) : _str(str) {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw() {
	return _str.c_str();
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooLowException::GradeTooLowException(const std::string &str) : _str(str) {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return _str.c_str();
}

Form::GradeTooLowException::GradeTooLowException() {}


std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "Документ: " << form.getTitle() << ", уровень доступа для подписи: " << form.getGradeSign() << ", уровень доступа для выполнения: " << form.getGradeExec() << ", Статус: " << ((form.getValid() == 1) ? "Подписан" : "Не подписан");
	return os;
}