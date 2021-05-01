//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX03_SHRUBBERYCREATIONFORM_HPP
#define EX03_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm(const std::string &);
		virtual ~ShrubberyCreationForm();
		virtual bool		execute(Bureaucrat const &) const;
		const std::string	&getTarget() const;
	private:
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
		virtual bool		announce() const;
		const std::string 	_target;
};

#endif //EX03_SHRUBBERYCREATIONFORM_HPP
