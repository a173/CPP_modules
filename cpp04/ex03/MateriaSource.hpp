//
// Created by Allegra Caryn on 4/24/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		virtual ~MateriaSource();
		MateriaSource & operator=(const MateriaSource &);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

	private:
		void 		my_del();
		AMateria**	_materia;
		int			_count;
};


#endif //EX03_MATERIASOURCE_HPP
