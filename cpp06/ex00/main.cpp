#include <iostream>
#include "Cast.hpp"

int main(int argc, char **argv) {
	try {
		Cast cast(&argv[1], argc - 1);
	} catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	return 0;
}
