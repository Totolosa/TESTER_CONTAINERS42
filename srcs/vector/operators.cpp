#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	std::cout << "----------> = <----------" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease> v2 = v;
	print_vec<vector<NoLeaksPlease> >(v2);
	vector<NoLeaksPlease> v3;
	v2 = v3;
	print_vec<vector<NoLeaksPlease> >(v2);

	// std::cout << "----------> <= <----------" << std::endl;


	return 0;
}