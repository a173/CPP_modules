//
// Created by Allegra Caryn on 4/23/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP
#include <iostream>

class Victim {
	public:
		Victim(std::string name);
		Victim(const Victim &);
		virtual ~Victim();
		Victim &	operator=(Victim const & a);
		std::string announce() const ;
		const std::string & getName() const;
		virtual void getPolymorphed() const;

	private:
		Victim();
		std::string _name;
};

std::ostream & operator<<(std::ostream & o, Victim const & a);

#endif //EX00_VICTIM_HPP
