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
	print_vec<vector<NoLeaksPlease> >(v);
	print_vec<vector<NoLeaksPlease> >(vc);

std::cout << "----------> at <----------" << std::endl;
	try { 
		 std::cout << v.at(2) << std::endl;
		 std::cout << vc.at(2) << std::endl;
		 std::cout << v.at(0) << std::endl;
		 std::cout << vc.at(0) << std::endl;
		 std::cout << v.at(5) << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try { 
		 std::cout << vc.at(5) << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try { 
		 std::cout << v.at(-1) << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try { 
		 std::cout << vc.at(-1) << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}

std::cout << "----------> front <----------" << std::endl;
	std::cout << "v.front() = "  << v.front() << std::endl;
	std::cout << "vc.front() = "  << vc.front() << std::endl;
	// std::cout << "v_empty.front() = "  << v_empty.front() << std::endl;

std::cout << "----------> back <----------" << std::endl;
	std::cout << "v.back() = "  << v.back() << std::endl;
	std::cout << "vc.back() = "  << vc.back() << std::endl;
	// std::cout << "v_empty.back() = "  << v_empty.back() << std::endl;


	return 0;
}