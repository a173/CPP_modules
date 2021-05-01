//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template<typename T>

void swap(T & x, T & y) {
	T n = x;
	x = y;
	y = n;
}

template<typename T>
T	max(T const & x, T const & y) {
	return ((y < x) ? x : y);
}

template<typename T>
T	min(T const & x, T const & y) {
	return ((y > x) ? x : y);
}

#endif //EX00_WHATEVER_HPP
