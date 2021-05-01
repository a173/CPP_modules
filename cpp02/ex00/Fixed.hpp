//
// Created by Allegra Caryn on 4/21/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(Fixed const & a);
		~Fixed(void);

		Fixed &				operator=(Fixed const & a);

		int					getRawBits(void) const;
		void 				setRawBits(int const raw);
private:
		int 				_fix;
		static const int	_bits = 8;
};

//std::ostream &	operator<<(std::ostream & o, Fixed const & a);

#endif //EX00_FIXED_HPP
