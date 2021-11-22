#include "test_vector.hpp"

int test() {
	vector<int> v;
	vector<int> vempty;
	vector<int> vempty2;
	std::cout << "----------> = <----------" << std::endl;
	print_vec<vector<int> >(v);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	print_vec<vector<int> >(v);

	vector<int> v2 = v;
	print_vec<vector<int> >(v2);
	v2 = vempty;
	print_vec<vector<int> >(v2);
	v2 = v;
	vector<int> v3(v);
	v3.push_back(6);
	print_vec<vector<int> >(v3);

	std::cout << "----------> == <----------" << std::endl;
	std::cout << (v == vempty) << std::endl;
	std::cout << (vempty == v) << std::endl;
	std::cout << (vempty == vempty2) << std::endl;
	std::cout << (v == v2) << std::endl;
	std::cout << (v == v3) << std::endl;

	std::cout << "----------> != <----------" << std::endl;
	std::cout << (v != vempty) << std::endl;
	std::cout << (vempty != v) << std::endl;
	std::cout << (vempty != vempty2) << std::endl;
	std::cout << (v != v2) << std::endl;
	std::cout << (v != v3) << std::endl;


	return 0;
}