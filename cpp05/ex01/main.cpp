#include "Form.hpp"
#include "Bureaucrat.hpp"

void test_form()
{
	try {
		Form form("F1", 100, 100);
		std::cout << form << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Form form("F2", 0, 100);
		std::cout << form.getTitle() << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Form form("F3", 10, 100);
		std::cout << form << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Form form("F4", 151, 100);
		std::cout << form.getTitle() << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		Form form("F5", 149, 100);
		std::cout << form.getTitle() << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}

void test()
{
	Bureaucrat bureaucrat("Buro1", 100);
	std::cout << bureaucrat << std::endl;
	try {
		Form form("F1", 100, 100);
		std::cout << form << std::endl;
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	try {
		Form form("F2", 99, 100);
		form.beSigned(bureaucrat);
	}catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	try{
		Form form("F3", 151, 100);
		form.beSigned(bureaucrat);
	} catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
}


int main()
{
//	test_form();
	test();
	return (0);
}
