//
// Created by Allegra Caryn on 4/19/21.
//

#ifndef PONY_HPP
#define PONY_HPP
# include <iostream>

class Pony {
	public:
		Pony();
		~Pony();
		Pony(std::string name, std::string color);
		std::string	getName();
		std::string	getColor();
		void 		toGo();
		void		setName(std::string name);
		void 		setColor(std::string color);
	private:
		std::string _nickname;
		std::string _color;
};

#endif //PONY_HPP
