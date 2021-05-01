//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

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
		void 		upValid(int);
		void 		lowValid(int);
		std::string _name;
		int 		_class;
};



#endif //EX00_BUREAUCRAT_HPP
