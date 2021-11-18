#include "vector.hpp"

void test();

int main() {
	try {
		test();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	catch (std::bad_alloc &e) {
		std::cout << e.what() << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}

// int main() {
// 	int myints[] = {1, 2, 3, 4, 5};

// 	ft::vector<int> a(myints, myints + 4);
// 	ft::vector<int> b(a.begin(), a.end());
// }