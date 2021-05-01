//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include <iostream>
#include <stdexcept>
class Form;
#include "Bureaucrat.hpp"

class Form {
public:
	Form(const Form &);
	Form(const std::string &, const int, const int);
	virtual 		~Form();
	void 			beSigned(const Bureaucrat&);
	std::string 	getTitle() const;
	bool 			getValid() const;
	int				getGradeSign() const;
	int				getGradeExec() const;
	void 			setValid(int);
	class	GradeTooHighException : public std::exception {
		public:
			GradeTooHighException(std::string const &);
			virtual ~GradeTooHighException() throw();
			virtual const char *what() const throw();
		private:
			GradeTooHighException();
			std::string	_str;
	};
	class		GradeTooLowException : public std::exception {
		public:
			GradeTooLowException(std::string const &);
			virtual ~GradeTooLowException() throw();
			virtual const char *what() const throw();
		private:
			GradeTooLowException();
			std::string	_str;
	};
private:
	Form();
	Form				&operator=(const Form&);
	const std::string	_title;
	bool				_valid;
	const int			_gradeSign;
	const int 			_gradeExec;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //EX01_FORM_HPP
