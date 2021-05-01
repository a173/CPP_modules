//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
	public:
		Squad();
		Squad(const Squad &);
		virtual ~Squad();
		Squad	& operator=(const Squad &);
		virtual int getCount() const;
		virtual	ISpaceMarine* getUnit(int) const;
		virtual	int push(ISpaceMarine*);
	private:
		int				_count;
		ISpaceMarine**	_marine;
		void 			my_del();
};


#endif //EX02_SQUAD_HPP
