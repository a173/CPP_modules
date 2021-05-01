#include "FileStream.hpp"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	if (argc == 4) {
		FileStream replace = FileStream(argv);
		replace.replaceWord();
	}
	else
		std::cout << "Неверное количество аргументов" << std::endl;
	return 0;
}
