//
// Created by Allegra Caryn on 4/28/21.
//

#include "Span.hpp"

Span::Span() {}

Span::Span(int n) : _count(n) {}

Span::Span(const Span &a) {
	*this = a;
}

Span &Span::operator=(const Span &a) {
	if (this == &a)
		return (*this);
	_count = a._count;
	std::copy(a._array.begin(), a._array.end(), std::back_inserter(_array));
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
	if (_array.size() == static_cast<std::size_t>(_count))
		throw std::runtime_error("Ошибка добавления элемента в коллекцию.");
	_array.push_back(n);
	std::sort(_array.begin(), _array.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (!(static_cast<std::size_t>(end - begin) <= _count - _array.size()))
		throw std::runtime_error("Размер коллекции не позволяет добавить " + std::to_string((end - begin) - (_count - _array.size())) + " элементов!");
	_array.insert(_array.end(), begin, end);
	std::sort(_array.begin(), _array.end());
}

int Span::shortestSpan() const {
	if (_array.empty())
		throw std::runtime_error("Коллекция пуста.");
	else if (_array.size() == 1)
		throw std::runtime_error("Коллекция имеет всего один элемент.");
	int buf = 0;
	int n = 0;
	for (std::size_t i = 2; i < _array.size(); i++) {
		if (n == 0) {
			if ((buf = *++_array.begin() + i - *_array.begin() + i) > 0)
				n = buf;
		}
		else if ((buf = *_array.begin() + i - *_array.begin() + i - 1) < n && buf > 0)
			n = buf;
	}
	if (n == 0)
		throw std::runtime_error("Все элементы последовательности равны.");
	return n;
}

int Span::longestSpan() const {
	if (_array.empty())
		throw std::runtime_error("Коллекция пуста.");
	else if (_array.size() == 1)
		throw std::runtime_error("Коллекция имеет всего один элемент.");
	return *_array.rbegin() - *_array.begin();
}

int Span::getSize() const {
	return _count;
}

int &Span::operator[](const int &i) {
	return _array[i];
}

