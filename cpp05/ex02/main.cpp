#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
void shrub_test();

void robo_test();

void presidential_test();

int main()
{
	std::srand(std::time(NULL));
	shrub_test();
////	robo_test();
//	presidential_test();
}

void presidential_test() {
	PresidentialPardonForm *presidentialPardonForm;
	Bureaucrat *bureaucrat;
	try {
		presidentialPardonForm = new PresidentialPardonForm("LOL");
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	std::cout << *presidentialPardonForm << std::endl;
	try {
		bureaucrat = new Bureaucrat("Buro", 1);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->signing(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->execute(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << *presidentialPardonForm << std::endl;
}

void robo_test() {
	try {
		RobotomyRequestForm robotomyRequestForm("HIQWE");
		try {
			std::cout << robotomyRequestForm << std::endl;
			Bureaucrat bureaucrat("Buro", 5);
			try {
				bureaucrat.signing(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.signing(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.execute(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.execute(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
}

void shrub_test() {
	try {
		ShrubberyCreationForm shrubberyCreationForm("George");
		std::cout << shrubberyCreationForm << std::endl;
		try {
			Bureaucrat bureaucrat("Buro", 10);

			try {
				bureaucrat.signing(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	-----------exception
			try {
				bureaucrat.signing(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	------------------------------
			try {
				bureaucrat.execute(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		} catch (std::exception &exception) {
			std::cerr << exception.what() << std::endl;
		}
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}

}