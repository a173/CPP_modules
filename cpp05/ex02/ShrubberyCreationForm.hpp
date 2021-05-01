//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm(const std::string &);
	virtual ~ShrubberyCreationForm();
	virtual bool		execute(Bureaucrat const &) const;
	const std::string	&getTarget() const;
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
	virtual bool		announce() const;
	const std::string 	_target;
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
