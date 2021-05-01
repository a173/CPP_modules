//
// Created by Allegra Caryn on 4/21/21.
//

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const & a);
	Fixed(int n);
	Fixed(float n);
	~Fixed(void);

	Fixed &				operator=(Fixed const & a);

	float				getRawBits(void) const;
	void 				setRawBits(int const raw);
	int					toInt(void) const;
	float 				toFloat(void) const;
private:
	int 				_fix;
	static const int	_bits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & a);


#endif //EX01_FIXED_HPP
