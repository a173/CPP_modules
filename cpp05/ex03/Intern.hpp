//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdexcept>

class Intern {
	public:
		Intern();
		Intern(const Intern&);
		~Intern();
		Intern &operator=(const Intern&);
		Form* makeForm(const std::string &, const std::string &);
	class	FormException : public std::exception {
		public:
			FormException();
			virtual ~FormException() throw();
			virtual const char *what() const throw();
	};
	private:
//		struct s_form {
//			std::string	str;
//			Form		*createForm;
//		} _t_form[3];

		 struct s_form {
		 	std::string	str;
		 	Form*	(*createForm)(const std::string &);
		 } _t_form[3];
};


#endif //EX03_INTERN_HPP
