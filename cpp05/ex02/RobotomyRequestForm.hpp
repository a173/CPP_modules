//
// Created by Allegra Caryn on 4/25/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm(const std::string &);
		virtual ~RobotomyRequestForm();
		virtual bool		execute(Bureaucrat const &) const;
		const std::string	&getTarget() const;
	private:
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);
		virtual bool		announce() const;
		const std::string 	_target;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
