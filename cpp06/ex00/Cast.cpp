//
// Created by Allegra Caryn on 4/26/21.
//

#include "Cast.hpp"

Cast::Cast() {}

Cast::Cast(const Cast &) {}

Cast::Cast(char** str, int argc) {
	if (argc == 0)
		throw CastException();
	_s = str;
	for (int i = 0; i < argc; i++) {
		valid(_s[i]);
		print();
	}
}

void Cast::valid(std::string s) {

	if (std::isdigit(s[0])) {
		_flag = 1;
		if (s.find('.') != std::string::npos)
			_flag = 3;
		if (s.find('f') != std::string::npos)
			_flag = 2;
	} else
		_flag = 0;
	if (_flag == 1)
		_numInt = std::stoi(s);
	else if (_flag == 2)
		_numFloat = std::stof(s);
	else if (_flag == 3)
		_numDouble = std::stod(s);
}

Cast::~Cast() {}

Cast &Cast::operator=(const Cast &) {
	return *this;
}

void	Cast::castIntChar(int flag) const {
	if (flag == 1)
		std::cout << "char: ";
	else
		std::cout << "int: ";
	try {
		int c;
		if (_flag == 1)
			c = _numInt;
		else if (_flag == 2)
			c = static_cast<int>(_numFloat);
		else if (_flag == 3)
			c = static_cast<int>(_numDouble);
		else
			throw std::exception();
		if (flag == 1) {
			if (c < 0 || c > 127)
				throw std::exception();
			if (std::isprint(static_cast<char>(c)))
				std::cout << '\'' << static_cast<char>(c) << '\'' << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		else
			std::cout << c << std::endl;
	} catch (std::exception &exception) {
		std::cout << "impossible" << std::endl;;
	}
}

void Cast::castFloat() const {
	std::cout << "float: ";
	try {
		float c;
		if (_flag == 1)
			c = static_cast<float>(_numInt);
		else if (_flag == 2)
			c = _numFloat;
		else if (_flag == 3)
			c = static_cast<float>(_numDouble);
		else
			throw std::exception();
		std::cout << std::fixed << std::setprecision(1) << c << "f" << std::endl;
	} catch (std::exception &exception) {
		std::cout << "nan" << std::endl;;
	}
}

void Cast::castDouble() const {
	std::cout << "double: ";
	try {
		double c;
		if (_flag == 1)
			c = static_cast<double>(_numInt);
		else if (_flag == 2)
			c = static_cast<double>(_numFloat);
		else if (_flag == 3)
			c = _numDouble;
		else
			throw std::exception();
		std::cout << std::fixed << std::setprecision(1) << c << std::endl;
	} catch (std::exception &exception) {
		std::cout << "nan" << std::endl;;
	}
}

void Cast::print() const {
	castIntChar(1);
	castIntChar(0);
	castFloat();
	castDouble();
}


const char *Cast::CastException::what() const throw() {
	return "Входные параметры не прошли проверку";
}

Cast::CastException::~CastException() throw() {}

Cast::CastException::CastException() {}
