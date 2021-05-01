//
// Created by Allegra Caryn on 4/27/21.
//

#include "Data.hpp"

Data::Data() {}

Data::Data(const Data &a) { *this = a; }

Data::~Data() {}

Data &Data::operator=(const Data &) { return *this; }

void *Data::serialize(void) {
	struct s_data *res = new struct s_data;

	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 50; j++)
			if (j % 2 == 0)
				res->s[i] += std::rand() % 26 + 'a';
			else
				res->s[i] += std::rand() % 26 + 'A';
	}
	res->n = std::rand();
	std::cout << "***Before using serialization***" << std::endl;
	std::cout << *res << std::endl;
	return reinterpret_cast<void *>(res);
}

struct s_data *Data::deserialize(void *raw) {
	return reinterpret_cast<struct s_data *>(raw);
}

std::ostream &	operator<<(std::ostream & o, struct s_data const &rhs) {
	o	<< "s1: " << rhs.s[0] << std::endl
		<< "i: " << rhs.n << std::endl
		<< "s2: " << rhs.s[1];
	return o;
}
