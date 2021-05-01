//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX02_BUREAUCRAT_HPP
#define EX02_BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat &);
		Bureaucrat(std::string const &, int);
		~Bureaucrat();
		Bureaucrat 	&operator=(const Bureaucrat &);
		void 		upClass(int);
		void 		lowClass(int);
		std::string	getName() const;
		int 		getClass() const;
		void 		signing(Form&) const;
		void 		execute(Form&) const;
		class		GradeTooHighException : public std::exception {
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
		Bureaucrat();
		std::string _name;
		int 		_class;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &form);

#endif //EX02_BUREAUCRAT_HPP
