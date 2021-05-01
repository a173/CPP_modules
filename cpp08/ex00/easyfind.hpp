//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <iostream>

template <typename T>
typename T::iterator easyfind(T &arr, int n) {
	typename T::iterator fine;
	if ((fine = std::find(arr.begin(), arr.end(), n)) != arr.end())
		return (fine);
	throw std::runtime_error("Вхождение " + std::to_string(n) + " не найдено");
}

#endif //EX00_EASYFIND_HPP
