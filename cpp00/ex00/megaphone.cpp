#include <iostream>

//void print(char *str, int i) {
//	while (str[++i])
//		if (str[i] > 96 && str[i] < 123)
//			std::cout << (char) (str[i] - 32);
//		else
//			std::cout << str[i];
//}
//
//int main(int argc, char **argv) {
//	int i;
//
//	i = 0;
//	if (argc > 1)
//		while (argv[++i])
//			print(argv[i], -1);
//	else
//		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
//	std::cout << std::endl;
//	return 0;
//}

int main(int argc, char **argv) {
	int i(0);
	std::string str("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (argc > 1)
		while (argv[++i]) {
			str = std::string(argv[i]);
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
		}
	else
		std::cout << str;
	std::cout << std::endl;
	return 0;
}
