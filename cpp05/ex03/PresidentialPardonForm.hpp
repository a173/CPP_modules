//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX03_PRESIDENTIALPARDONFORM_HPP
#define EX03_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
		PresidentialPardonForm(const std::string &);
		virtual ~PresidentialPardonForm();
		virtual bool		execute(Bureaucrat const &) const;
		const std::string	&getTarget() const;
	private:
		PresidentialPardonForm &operator=(const PresidentialPardonForm&);
		virtual bool		announce() const;
		const std::string 	_target;
};


#endif //EX03_PRESIDENTIALPARDONFORM_HPP
