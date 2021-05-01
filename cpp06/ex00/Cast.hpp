//
// Created by Allegra Caryn on 4/26/21.
//

#ifndef EX00_CAST_HPP
#define EX00_CAST_HPP
#include <iostream>
#include <stdexcept>
#include <iomanip>

class Cast {
	public:
		Cast(char**, int);
		Cast(const Cast &);
		~Cast();
		Cast	&operator=(const Cast &);
		void 	print() const;
		void	castIntChar(int) const;
		void 	castFloat() const;
		void 	castDouble() const;
		void 	valid(std::string);
		class CastException : public std::exception {
				public:
					CastException();
					virtual ~CastException() throw();
					virtual const char *what() const throw();
			};
	private:
		Cast();
		char**	_s;
		int 	_flag;
		int 	_numInt;
		float 	_numFloat;
		double 	_numDouble;
};


#endif //EX00_CAST_HPP
