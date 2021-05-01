#include <iostream>
#include "Span.hpp"

int RandomNumber () { return (std::rand()%100); }

void test()
{
	Span sp = Span(20);
	sp.addNumber(1);
	sp.addNumber(2);

	std::vector<int> vector(18);
	std::generate(vector.begin(), vector.end(), RandomNumber);
	try {
		sp.addNumber(vector.begin(), vector.end());
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << "span" << std::endl;
	for (int i = 0; i < sp.getSize(); ++i)
		std::cout << sp[i] << " ";
	std::cout << std::endl;
	std::cout << "vector" << std::endl;
	for (int i = 0; i < 2; ++i)
		std::cout << "  ";
	for (uint i = 0; i < vector.size(); ++i)
		std::cout << vector[i] << " ";
	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}

void 	main_test(){
	Span sp = Span(5);
	try {
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void 	crazy_test(){
	std::vector<int> vector(1000);
	std::generate(vector.begin(), vector.end(), RandomNumber);

	Span span(1003);
	span.addNumber(0);
	span.addNumber(1);
	span.addNumber(3);
	span.addNumber(3);
	try {
		span.addNumber(vector.begin(), vector.end());
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << span.longestSpan() << std::endl;
	std::cout << span.shortestSpan() << std::endl;
}

int main()
{
	std::srand(time(NULL));
//	main_test();
//	test();
	crazy_test();
	return 0;
}