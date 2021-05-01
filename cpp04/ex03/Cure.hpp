//
// Created by Allegra Caryn on 4/24/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &);
		virtual ~Cure();
		Cure & operator=(const Cure &);
		virtual AMateria* clone() const;
		virtual void  use(ICharacter& target);
};


#endif //EX03_CURE_HPP
