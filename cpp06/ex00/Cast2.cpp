//
// Created by Allegra Caryn on 4/27/21.
//

#include "Cast2.hpp"

Cast2::Cast2() {}

Cast2::Cast2(const Cast2 &) {}

Cast2::Cast2(char** str, int argc) {
	if (argc == 0)
		throw CastException();
	_s = str;
	for (int i = 0; i < argc; i++)
		print(_s[i]);
}

Cast2::~Cast2() {}

Cast2 &Cast2::operator=(const Cast2 &) {
	return *this;
}

void	Cast2::castIntChar(int flag, std::string _c) {
	if (flag == 1)
		std::cout << "char: ";
	else
		std::cout << "int: ";
	try {
		int c = std::stoi(_c);
		if (flag == 1) {
			if (c < 0 || c > 127)
				throw std::exception();
			if (std::isprint(static_cast<char>(c)))
				std::cout << '\'' << static_cast<char>(c) << '\'' << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		else
			std::cout << static_cast<int>(c) << std::endl;
	} catch (std::exception &exception) {
		std::cout << "impossible" << std::endl;;
	}
}

void Cast2::castFloatDouble(int flag, std::string _c) {
	if (flag == 1)
		std::cout << "float: ";
	else
		std::cout << "double: ";
	try {
		if (flag == 1)
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(std::stof(_c)) << "f" << std::endl;
		else
			std::cout << std::fixed << std::setprecision(1) << static_cast<double>(std::stod(_c)) << std::endl;
	} catch (std::exception &exception) {
		std::cout << "nan" << std::endl;;
	}
}

void Cast2::print(std::string str) {
	castIntChar(1, str);
	castIntChar(0, str);
	castFloatDouble(1, str);
	castFloatDouble(0, str);
}


const char *Cast2::CastException::what() const throw() {
	return "Входные параметры не прошли проверку";
}

Cast2::CastException::~CastException() throw() {}

Cast2::CastException::CastException() {}