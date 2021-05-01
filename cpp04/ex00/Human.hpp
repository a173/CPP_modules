//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX00_HUMAN_HPP
#define EX00_HUMAN_HPP
#include "Victim.hpp"

class Human : public Victim {
	public:
		Human(std::string name);
		Human(const Human &);
		virtual ~Human();
		Human &	operator=(Human const & a);
		virtual void getPolymorphed() const;
	private:
		Human();
};

std::ostream & operator<<(std::ostream & o, Human const & a);

#endif //EX00_HUMAN_HPP
