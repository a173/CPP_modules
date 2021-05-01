//
// Created by Allegra Caryn on 4/21/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fix(0 << _bits) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & a) {
	std::cout << "Copy constructor called" << std::endl;
//	setRawBits(a.getRawBits());
	*this = a;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _fix >> _bits;
}

void	Fixed::setRawBits(int const raw) {
	_fix = raw;
}

Fixed &	Fixed::operator=(Fixed const & a) {
	std::cout << "Assignation operator called" << std::endl;
	_fix = a.getRawBits() << _bits;
	return *this;
}
