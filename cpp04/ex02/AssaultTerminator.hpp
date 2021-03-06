//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &);
		virtual ~AssaultTerminator();
		AssaultTerminator & operator=(const AssaultTerminator &);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
