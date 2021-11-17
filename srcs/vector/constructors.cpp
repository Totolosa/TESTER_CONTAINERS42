#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease> v2(10, NoLeaksPlease(3, "test 2"));
	print_vec<vector<NoLeaksPlease> >(v2);
	vector<NoLeaksPlease> v3(20);
	print_vec<vector<NoLeaksPlease> >(v3);

	vector<NoLeaksPlease> v4(v2);
	print_vec<vector<NoLeaksPlease> >(v4);

	return 0;
}