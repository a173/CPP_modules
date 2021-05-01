#include "iter.hpp"

int main()
{
	std::srand(time(NULL));
	{
		std::cout << "ints--------" << std::endl;
		int array[20];
		::iter(array, 20, ::random);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		::iter(array, 20, ::func);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		std::cout << "" << std::endl;
	}
	{
		std::cout << "double--------" << std::endl;
		double array[20];
		::iter(array, 20, ::random);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		::iter(array, 20, ::func);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		std::cout << "" << std::endl;
	}
	{
		std::cout << "float--------" << std::endl;
		float array[20];
		::iter(array, 20, ::random);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		::iter(array, 20, ::func);
		::iter(array, 20, ::print);
		std::cout << std::endl;
		std::cout << "" << std::endl;
	}
	{
		std::cout << "string--------" << std::endl;
		std::string array[4] = {"5", "Morozkin", "Anton", "Ivanovich"};
		::iter(array, 4, ::print);
		std::cout << std::endl;
		::iter(array, 4, ::func);
		::iter(array, 4, ::print);
		std::cout << std::endl;
		std::cout << "" << std::endl;
	}

}