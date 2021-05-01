//
// Created by Allegra Caryn on 4/20/21.
//

#include "FileStream.hpp"

FileStream::FileStream(char **argv) {
	this->str = argv[1];
	this->s1 = argv[2];
	this->s2 = argv[3];
	this->count = 0;
}

void FileStream::replaceWord() {
	std::string new_str;
	if (this->s1.length() == 0 || this->s2.length() == 0 || this->str.length() == 0) {
		std::cout << "Один из аргументов пуст" << std::endl;
		return;
	}
	else if ((new_str = fileToString(this->str)).empty()) {
		std::cout << "Ошибка чтения файла" << std::endl;
		return;
	}
	size_t i = 0;
	int f = 1;
	while (f)
		if ((i = new_str.find(s1, i)) != std::string::npos) {
			new_str.replace(i, s1.length(), s2);
			i += s1.length();
			this->count++;
		}
		else
			f = 0;
	this->str = this->str + ".replace";
	std::ofstream  ofs(this->str);
	ofs << new_str << std::endl;
	if (!ofs) {
		std::cout << "Ошибка создания файла" << std::endl;
		return;
	}
	ofs.close();
	std::cout << "Произведено " << this->count <<  " замен" << std::endl;
}

std::string FileStream::fileToString(std::string file) {
	std::string str;
	std::ifstream	ifs(file);
	std::getline(ifs, str, '\0');
	ifs.close();
	return str;
}