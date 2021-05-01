#include "Bureaucrat.hpp"

void test() {
	std::cout << "* TEST *" << std::endl;

//	try {
//		Bureaucrat bureaucrat("BuroTest", 160);
//		std::cout << bureaucrat.getClass() << std::endl;
//		bureaucrat.lowClass(5);
//		std::cout << bureaucrat.getClass() << std::endl;
//		bureaucrat.upClass(5);
//		std::cout << bureaucrat.getClass() << std::endl;
//
//		std::cout << "----------------" << std::endl;
//	}
//	catch (Bureaucrat::GradeTooLowException &e) {
//		std::cout << e.what() << std::endl;
//	}
	Bureaucrat bureaucrat("BuroTest", 1);
	std::cout << bureaucrat.getClass() << std::endl;
	bureaucrat.lowClass(5);
	std::cout << bureaucrat.getClass() << std::endl;
	bureaucrat.upClass(5);
	std::cout << bureaucrat.getClass() << std::endl;

	std::cout << "----------------" << std::endl;
}

int main()
{
	test();
}