//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &);
		virtual ~TacticalMarine();
		TacticalMarine & operator=(const TacticalMarine &);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

};


#endif //EX02_TACTICALMARINE_HPP
