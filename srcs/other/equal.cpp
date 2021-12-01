#include "test_vector.hpp"

template <typename T>
bool are_even(T & a, T & b) {
	if (a % 2 == 0 && b % 2 == 0){
		std::cout << "a = " << a << ", b = " << b << std::endl;
		return true;
	}

	return false;
}

int test() {
	vector<int> v;
	vector<int> v_empty1;
	vector<int> v_empty2;
	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);
	v.push_back(10);
	const vector<int> vc(v);
	vector<int> vbis(v);
	vector<int> v2(v);
	v2.push_back(12);
	v2.push_back(14);
	v2.push_back(16);
	v2.push_back(18);
	vector<int> v3(v2);
	v3.pop_back();
	v3.push_back(17);
	vector<int> v4(v2);
	v4.push_back(20);
	vector<int> v5(v2);
	v5.push_back(19);

	std::cout << "v :" << std::endl;
	print_vec<vector<int> >(v);
	std::cout << "v2 :" << std::endl;
	print_vec<vector<int> >(v2);
	std::cout << "v3 :" << std::endl;
	print_vec<vector<int> >(v3);
	std::cout << "v4 :" << std::endl;
	print_vec<vector<int> >(v4);
	std::cout << "v5 :" << std::endl;
	print_vec<vector<int> >(v5);

	std::cout << "----------> equal <----------" << std::endl;
	// std::cout << "equal v et vempty avec ref=v = " << equal(v.begin(), v.end(), v_empty1.begin()) << std::endl;
	// std::cout << "equal v et vempty avec ref=vempty1 = " << equal(v_empty1.begin(), v_empty1.end(), v.begin()) << std::endl;
	// std::cout << "equal vempty et vempty avec ref=vempty = " << equal(v_empty1.begin(), v_empty1.end(), v_empty2.begin()) << std::endl;
	std::cout << "equal v et vbis avec ref=v = " << equal(v.begin(), v.end(), vbis.begin()) << std::endl;
	std::cout << "equal v et v2 avec ref=v = " << equal(v.begin(), v.end(), v2.begin()) << std::endl;
	std::cout << "equal v et v2 avec ref=v2 = " << equal(v2.begin(), v2.end(), v.begin()) << std::endl;
	std::cout << "equal(pred) v et vbis avec ref=v = " << equal(v.begin(), v.end(), vbis.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v et v2 avec ref=v = " << equal(v.begin(), v.end(), v2.begin(), are_even<int>) << std::endl;
	// std::cout << "equal(pred) v et v2 avec ref=v2 = " << equal(v2.begin(), v2.end(), v.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v3 avec ref=v2 = " << equal(v2.begin(), v2.end(), v3.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v3 avec ref=v3 = " << equal(v3.begin(), v3.end(), v2.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v4 avec ref=v2 = " << equal(v2.begin(), v2.end(), v4.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v4 avec ref=v4 = " << equal(v4.begin(), v4.end(), v2.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v5 avec ref=v2 = " << equal(v2.begin(), v2.end(), v5.begin(), are_even<int>) << std::endl;
	std::cout << "equal(pred) v2 et v5 avec ref=v4 = " << equal(v5.begin(), v5.end(), v2.begin(), are_even<int>) << std::endl;

	return 0;
}
