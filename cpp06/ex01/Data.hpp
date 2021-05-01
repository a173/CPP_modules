//
// Created by Allegra Caryn on 4/27/21.
//

#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP
#include <iostream>

struct	s_data
{
	std::string s[2];
	int			n;
};

class Data {
	public:
		static void * serialize(void);
		static struct s_data * deserialize(void * raw);
	private:
		Data();
		Data(const Data &);
		~Data();
		Data & operator=(const Data &);
};

std::ostream &	operator<<(std::ostream & o, struct s_data const & a);


#endif //EX01_DATA_HPP
