#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	vector<NoLeaksPlease> vc;
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease>::iterator it = v.begin();
	std::cout << *it << std::endl;
	std::cout << it[3] << std::endl;

	{
		std::cout << std::endl << "----------> operators <----------" << std::endl;
		std::cout << "* :" << std::endl;
		std::cout << *(vc.begin()) << std::endl;
		long long test_long = 1;
		int test_int = 1;
		char test_char = 1;
		std::cout << *(vc.begin() + test_long) << std::endl;
		std::cout << *(vc.begin() + test_int) << std::endl;
		std::cout << *(vc.begin() + test_char) << std::endl;
	}



	std::cout << std::endl << "----------> const_iterator <----------" << std::endl;
	vector<NoLeaksPlease>::const_iterator itc1;
	// itc1 = v.begin();
	// std::cout << *it << std::endl;

	return 0;
}