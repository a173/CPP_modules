//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>

template<typename T>
void iter(T *array, int len, void func(T &elem)) {
	for (int i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void func(T &elem) {
	elem += 1;
}

template<typename T>
void print(T &elem) {
	std::cout.width(5);
	std::cout << elem << " ";
}

template<typename T>
void random(T &elem) {
	elem = std::rand() % 100 + (std::rand() % 100) / 10.0;
}

template<typename T>
void upperString(T &elem) {
	for (std::string::size_type i = 0; i < elem.length(); i++)
		elem[i] = std::toupper(elem[i]);
}

#endif //EX01_ITER_HPP
