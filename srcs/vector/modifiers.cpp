#include "test_vector.hpp"

int test() {
	vector<NoLeaksPlease> v;
	std::cout << "----------> push_back <----------" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test1"));
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test2"));
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test3"));
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test4"));
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test5"));
	print_vec<vector<NoLeaksPlease> >(v);

	std::cout << "----------> pop_back <----------" << std::endl;
	v.pop_back();
	print_vec<vector<NoLeaksPlease> >(v);

	std::cout << "----------> insert <----------" << std::endl;
	vector<NoLeaksPlease>::iterator it0 = v.begin() + 2;
	vector<NoLeaksPlease>::iterator it1 = v.insert(it0, NoLeaksPlease(3, "test6"));
	std::cout << "insert it = " << *it1 << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	v.push_back(NoLeaksPlease(3, "test7"));
	v.push_back(NoLeaksPlease(3, "test8"));
	print_vec<vector<NoLeaksPlease> >(v);
	vector<NoLeaksPlease>::iterator it2 = v.insert(it0, NoLeaksPlease(3, "test9"));
	std::cout << "insert it2 = " << *it2 << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);

	vector<NoLeaksPlease>::iterator it3 = v.insert(v.begin() +3, static_cast<size_t>(2), NoLeaksPlease(3, "test"));
	std::cout << "insert it3 = " << *it3 << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	vector<NoLeaksPlease>::iterator it4 = v.insert(v.end(), static_cast<size_t>(20), NoLeaksPlease(3, "test"));
	std::cout << "insert it4 = " << *it4 << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);

	std::cout << "----------> erase <----------" << std::endl;
	vector<NoLeaksPlease>::iterator it = v.erase(v.begin() + 1);
	std::cout << "erase it = " << *it << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	it = v.erase(v.begin());
	std::cout << "erase it = " << *it << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	it = v.erase(v.begin() + v.size() - 1);
	std::cout << "erase it = " << *it << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);

	it = v.erase(v.begin() + 7, v.begin() + 11);
	std::cout << "erase it = " << *it << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	it = v.erase(v.begin(), v.end());
	std::cout << "erase it = " << *it << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	v.insert(v.begin(), static_cast<size_t>(20), 1);

	std::cout << "----------> swap <----------" << std::endl;
	vector<NoLeaksPlease> v2;
	v2.push_back(NoLeaksPlease(3, "test"));
	v2.push_back(NoLeaksPlease(3, "test"));
	v2.push_back(NoLeaksPlease(3, "test"));
	v2.push_back(NoLeaksPlease(3, "test"));
	v2.push_back(NoLeaksPlease(3, "test"));
	std::cout << "v :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	std::cout << "v2 :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v2);
	v.swap(v2);
	std::cout << "v :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	std::cout << "v2 :" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v2);

	std::cout << "----------> clear <----------" << std::endl;
	print_vec<vector<NoLeaksPlease> >(v);
	v.clear();
	print_vec<vector<NoLeaksPlease> >(v);
	vector<NoLeaksPlease> v_empty;
	print_vec<vector<NoLeaksPlease> >(v_empty);
	v_empty.clear();
	print_vec<vector<NoLeaksPlease> >(v_empty);

	return 0;
}