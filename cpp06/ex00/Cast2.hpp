//
// Created by Allegra Caryn on 4/27/21.
//

#ifndef EX00_CAST2_HPP
#define EX00_CAST2_HPP
#include <iostream>
#include <iomanip>

class Cast2 {
public:
	Cast2(char**, int);
	Cast2(const Cast2 &);
	~Cast2();
	Cast2	&operator=(const Cast2 &);
	void 	print(std::string);
	void	castIntChar(int, std::string);
	void 	castFloatDouble(int, std::string);
	void 	valid(int, std::string);
	class CastException : public std::exception {
	public:
		CastException();
		virtual ~CastException() throw();
		virtual const char *what() const throw();
	};
private:
	Cast2();
	char** _s;
};


#endif //EX00_CAST2_HPP
