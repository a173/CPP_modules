#include <iostream>
#include "Array.tpp"

void ints()
{
	std::cout << "***Integer***" << std::endl;
	Array<int> array(5);
	for (unsigned int i = 0; i < array.size(); ++i)
		array[i] = i;
	for (unsigned int i = 0; i < array.size(); ++i)
		try {
			std::cout << array[i] << " ";
		} catch (std::exception &exception){
			std::cout << exception.what() << std::endl;
		}
	std::cout << std::endl;
	try {
		std::cout << array[array.size()] << " ";
	} catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	Array<int> array1;
	array1 = array;
	for (uint i = 0; i < array1.size(); ++i)
		std::cout << array1[i] << " ";
	std::cout << "" << std::endl;
}

void doubles()
{
	std::cout << "***Double***" << std::endl;
	Array<double> array(5);
	for (unsigned int i = 0; i < array.size(); ++i)
		array[i] =  static_cast <double > (std::rand()) / (static_cast <double> (RAND_MAX/ 10));
	for (unsigned int i = 0; i < array.size(); ++i)
		try {
			std::cout << array[i] << " ";
		} catch (std::exception &exception){
			std::cout << exception.what() << std::endl;
		}
	std::cout << std::endl;
	try {
		std::cout << array[array.size()] << std::endl;
	} catch (std::exception &exception){
		std::cout << exception.what() << std::endl;
	}
	Array<double> array1;
	array1 = array;
	for (uint i = 0; i < array1.size(); ++i)
		std::cout << array1[i] << " ";
	std::cout << "" << std::endl;
}

void strings()
{
	std::cout << "***String***" << std::endl;
	Array<std::string> array(5);
	array[0] = "Morozkin";
	array[1] = "Anton";
	array[2] = "Ivanovich";

	for (uint i = 0; i < array.size(); ++i)
		try {
			std::cout << array[i] << std::endl;
		} catch (std::exception &exception){
			std::cout << exception.what() << std::endl;
		}
	std::cout << std::endl;
	try {
		std::cout << array[array.size()] << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::srand(time(NULL));
	ints();
	doubles();
	strings();
	return (0);

}
