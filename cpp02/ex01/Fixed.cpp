//
// Created by Allegra Caryn on 4/21/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _fix(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n) : _fix(n << _bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float n) : _fix(roundf(n * (1 << _bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::getRawBits(void) const {
	return (float) _fix / (1 << _bits);
}

void	Fixed::setRawBits(int const raw) {
	_fix = raw;
}

Fixed &	Fixed::operator=(Fixed const & a) {
	std::cout << "Assignation operator called" << std::endl;
	_fix = a._fix;
	return *this;
}

int		Fixed::toInt(void) const {
	return _fix >> _bits;
}

float 	Fixed::toFloat(void) const {
	return _fix >> _bits;
}

std::ostream &	operator<<(std::ostream & o, Fixed const &rhs) {
	o << rhs.getRawBits();
	return o;
}
