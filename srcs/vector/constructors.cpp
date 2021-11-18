#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test1"));
	v.push_back(NoLeaksPlease(3, "test2"));
	v.push_back(NoLeaksPlease(3, "test3"));
	v.push_back(NoLeaksPlease(3, "test4"));
	v.push_back(NoLeaksPlease(3, "test5"));
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease> v2(10, NoLeaksPlease(3, "v2, test6"));
	print_vec<vector<NoLeaksPlease> >(v2);
	vector<NoLeaksPlease> v3(20);
	print_vec<vector<NoLeaksPlease> >(v3);

	vector<NoLeaksPlease> v4(v2);
	print_vec<vector<NoLeaksPlease> >(v4);

	const vector<NoLeaksPlease> vc(v);
	vector<NoLeaksPlease>::iterator it1 = v.begin() + 1;
	vector<NoLeaksPlease>::iterator it2 = v.begin() + 4;
	vector<NoLeaksPlease>::const_iterator const_it1(vc.begin() + 1);
	vector<NoLeaksPlease>::const_iterator const_it2(vc.begin() + 4);
	// std::cout << "const_it1 = " << *const_it1 << ", const_it2 = " << *const_it2 << std::endl;
	vector<NoLeaksPlease>::pointer ptr1 = &v[1];
	vector<NoLeaksPlease>::pointer ptr2 = &v[3];
	vector<NoLeaksPlease>::const_pointer const_ptr1 = &v[1];
	vector<NoLeaksPlease>::const_pointer const_ptr2 = &v[3];

	vector<NoLeaksPlease> v5(it1, it2);
	print_vec<vector<NoLeaksPlease> >(v5);
	vector<NoLeaksPlease> v6(const_it1, const_it2);
	print_vec<vector<NoLeaksPlease> >(v6);
	vector<NoLeaksPlease> v7(ptr1, ptr2);
	print_vec<vector<NoLeaksPlease> >(v7);
	vector<NoLeaksPlease> v8(const_ptr1, const_ptr2);
	print_vec<vector<NoLeaksPlease> >(v8);
	vector<NoLeaksPlease> v9(4, NoLeaksPlease(3, "v2, test7"));
	print_vec<vector<NoLeaksPlease> >(v9);



	return 0;
}