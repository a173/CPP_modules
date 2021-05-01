//
// Created by Allegra Caryn on 4/24/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(const Character &);
		Character(const std::string& name);
		virtual ~Character();
		Character & operator=(const Character &);
		std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		Character();
		void 			my_del();
		std::string 	_name;
		int 			_count_materia;
		AMateria**		_materia;
};

#endif //EX03_CHARACTER_HPP
