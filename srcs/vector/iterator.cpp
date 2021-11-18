#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease>::iterator it = v.begin();
	std::cout << *it << std::endl;
	std::cout << it[3] << std::endl;

	std::cout << std::endl << "----------> const_iterator <----------" << std::endl;
	vector<NoLeaksPlease>::const_iterator itc1;
	// itc1 = v.begin();
	// std::cout << *it << std::endl;

	return 0;
}