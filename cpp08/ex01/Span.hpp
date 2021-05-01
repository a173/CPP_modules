//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <iostream>
#include <vector>
#include <stdexcept>

class Span {
	public:
		Span(int);
		Span(const Span &);
		Span &operator=(const Span &);
		~Span();
		int& operator[] (const int &);
		void addNumber(int);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan() const;
		int longestSpan() const;
		int getSize() const;

	private:
		Span();
		int					_count;
		std::vector<int>	_array;
};


#endif //EX01_SPAN_HPP
