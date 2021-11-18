
#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	v.push_back(NoLeaksPlease(3, "test"));
	std::cout << "----------> size, capacity <----------" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);

	std::cout << "----------> max_size <----------" << std::endl;
	std::cout << "max_size = " << v.max_size() << std::endl << std::endl;

	std::cout << "----------> resize <----------" << std::endl;
	v.resize(3, NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);
	v.resize(6);
	print_vec<vector<NoLeaksPlease> >(v);
	v.resize(12, NoLeaksPlease(3, "test"));
	print_vec<vector<NoLeaksPlease> >(v);

	std::cout << "----------> empty <----------" << std::endl;
	vector<NoLeaksPlease> v_empty;
	std::cout << "v.empty = " << v.empty() << std::endl;
	std::cout << "v_empty.empty = " << v_empty.empty() << std::endl << std::endl;
	
	std::cout << "----------> reserve <----------" << std::endl;
	v_empty.reserve(6);
	print_vec<vector<NoLeaksPlease> >(v_empty);
	v.reserve(3);
	print_vec<vector<NoLeaksPlease> >(v);
	v.reserve(20);
	print_vec<vector<NoLeaksPlease> >(v);

	return 0;
}