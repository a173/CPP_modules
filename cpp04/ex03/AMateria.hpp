//
// Created by Allegra Caryn on 4/24/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	public:
		AMateria();
		AMateria(const AMateria &a);
		AMateria(std::string const & type);
		AMateria(unsigned int xp, std::string const & type);
		virtual ~AMateria();
		AMateria & operator=(const AMateria &);
		std::string	const & getType() const;
		unsigned int		getXP() const;
		int					getFlag() const;
		void				setFlag(int n);
		virtual AMateria* clone() const = 0;
		virtual void  use(ICharacter& target);

	private:
		unsigned int	_xp;
		std::string		_type;
		int 			_flag;
};


#endif //EX03_AMATERIA_HPP
