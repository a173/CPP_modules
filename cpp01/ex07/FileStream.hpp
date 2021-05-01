//
// Created by Allegra Caryn on 4/20/21.
//

#ifndef EX07_FILESTREAM_HPP
#define EX07_FILESTREAM_HPP
#include <iostream>
#include <fstream>

class FileStream {
private:
	std::string str;
	std::string s1;
	std::string s2;
	int 		count;
public:
	FileStream(char **argv);
	void		replaceWord();
	std::string fileToString(std::string file);
};


#endif //EX07_FILESTREAM_HPP
