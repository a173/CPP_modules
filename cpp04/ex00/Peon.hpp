//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP
#include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(std::string name);
		Peon(const Peon &);
		virtual ~Peon();
		Peon &	operator=(Peon const & a);
		virtual void getPolymorphed() const;
	private:
		Peon();
};

std::ostream & operator<<(std::ostream & o, Peon const & a);

#endif //EX00_PEON_HPP
