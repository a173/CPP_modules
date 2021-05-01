//
// Created by Allegra Caryn on 4/19/21.
//

#include "Pony.hpp"

Pony::Pony() {
	std::cout << "Я родился!" << std::endl;
}

Pony::Pony(std::string name, std::string color) {
	setName(name);
	setColor(color);
	std::cout << "Я родился!" << std::endl;
	toGo();
}

Pony::~Pony() {
	std::cout << "Мама, я не хочу умирать!!!!" << std::endl;
}

void Pony::toGo() {
	std::cout << "Я " << getName() << " - " << getColor() << ", мне хочется гулять!" << std::endl;
}

void Pony::setName(std::string name) {
	this->_nickname = name;
}

void Pony::setColor(std::string color) {
	this->_color = color;
}

std::string Pony::getName() {
	return this->_nickname;
}

std::string Pony::getColor() {
	return this->_color;
}
