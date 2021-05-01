#include "Data.hpp"

int main() {
	std::srand(time(NULL));

	struct s_data* data = Data::deserialize(Data::serialize());
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "***After using deserialization***" << std::endl;
	std::cout << *data << std::endl;
	return 0;
}
