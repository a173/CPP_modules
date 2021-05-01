//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX02_ARRAY_TPP
#define EX02_ARRAY_TPP
#include <stdexcept>

template<typename T>
class Array {
	public:
		Array() : _size(0), _data(0) {};
		Array(unsigned int size) : _size(size), _data(new T[size]) {};
		Array(const Array &o) { this = o; };
		virtual ~Array() { myFree(); };
		Array & operator=(const Array &a) {
			if (this == &a)
				return (*this);
			if (_data)
				myFree();
			_size = a._size;
			_data = new	T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				_data[i] = a._data[i];
			return *this;
		};
		T&	operator[](unsigned int i) {
			if (i < _size)
				return _data[i];
			throw std::runtime_error("Указан неверный индекс");
		};

		unsigned int size() const { return _size; };
	private:
		unsigned int _size;
		T *_data;
		void myFree() {
			delete [] _data;
			_data = 0;
		};
};

#endif //EX02_ARRAY_TPP
