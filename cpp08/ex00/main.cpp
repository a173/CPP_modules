#include "easyfind.hpp"
#include <list>
#include <vector>
#include <set>
#include <iostream>

void vector_test()
{
	std::vector<int> vector;

	for (int i = 0; i < 10; ++i)
		vector.push_back(i);
	std::vector<int>::iterator it;
	try {
		it = ::easyfind(vector, 1);
		std::cout << "Вхождение " << *it << " найдено" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}

void set_test() {
	std::set<int> set;
	for (int i = 10; i < 20; ++i)
		set.insert(i);
	std::set<int>::iterator it = set.begin();
	try {
		it = ::easyfind(set, 19);
		std::cout << "Вхождение " << *it << " найдено" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
//	set.insert(it, 20);
//	for (std::set<int>::iterator iterator = set.begin(); iterator != set.end(); ++iterator) {
//		std::cout << *iterator << std::endl;
//	}
}

int main()
{
	vector_test();
//	set_test();

}
