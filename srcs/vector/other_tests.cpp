#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	vector<NoLeaksPlease> v_empty;
	v.push_back(NoLeaksPlease(2, "test1"));
	v.push_back(NoLeaksPlease(2, "test2"));
	v.push_back(NoLeaksPlease(2, "test3"));
	v.push_back(NoLeaksPlease(2, "test4"));
	v.push_back(NoLeaksPlease(2, "test5"));
	const vector<NoLeaksPlease> vc(v);
	vector<NoLeaksPlease> v2(v);
	v2.push_back(NoLeaksPlease(2, "test6"));
	v2.push_back(NoLeaksPlease(2, "test7"));
	v2.push_back(NoLeaksPlease(2, "test8"));
	// print_vec<vector<NoLeaksPlease> >(v);
	// print_vec<vector<NoLeaksPlease> >(v2);

	std::cout << "----------> get_allocator <----------" << std::endl;
	vector<NoLeaksPlease>::allocator_type alloc = v.get_allocator();
	std::cout << typeid(alloc).name() << std::endl;

	std::cout << "----------> swap <----------" << std::endl;
	std::cout << "v :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	std::cout << "v2 :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v2);
	swap(v, v2);
	std::cout << "v :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	std::cout << "v2 :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v2);

	return 0;
}