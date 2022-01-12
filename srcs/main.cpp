#include <iostream>

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