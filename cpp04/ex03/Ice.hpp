//
// Created by Allegra Caryn on 4/24/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &);
		virtual ~Ice();
		Ice & operator=(const Ice &);
		virtual AMateria* clone() const;
		virtual void  use(ICharacter& target);
};


#endif //EX03_ICE_HPP
