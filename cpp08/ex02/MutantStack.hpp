//
// Created by Allegra Caryn on 4/28/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack(): std::stack<T>() {};
		MutantStack(MutantStack const &other): std::stack<T>(other) {};
		~MutantStack(){};
		MutantStack operator=(MutantStack const &) { return *this; };
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return (std::stack<T>::c.begin());
		}
		iterator end() {
			return (std::stack<T>::c.end());
		}
};



#endif //EX02_MUTANTSTACK_HPP
