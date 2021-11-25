#include "test_vector.hpp"

void test() {
	vector<NoLeaksPlease> v;
	v.push_back(NoLeaksPlease(2, "test1"));
	v.push_back(NoLeaksPlease(2, "test2"));
	v.push_back(NoLeaksPlease(2, "test3"));
	v.push_back(NoLeaksPlease(2, "test4"));
	v.push_back(NoLeaksPlease(2, "test5"));
	print_vec<vector<NoLeaksPlease> >(v);
	const vector<NoLeaksPlease> vc(v);

	std::cout << std::endl << "----------> begin <----------" << std::endl;
	std::cout << *v.begin() << std::endl;
	std::cout << *vc.begin() << std::endl;

	std::cout << std::endl << "----------> end <----------" << std::endl;
	std::cout << *(v.end() - 1) << std::endl;
	std::cout << *(vc.end() - 1) << std::endl;

	std::cout << std::endl << "----------> rbegin <----------" << std::endl;
	std::cout << *v.rbegin() << std::endl;
	std::cout << *vc.rbegin() << std::endl;

	std::cout << std::endl << "----------> rend <----------" << std::endl;
	std::cout << *(v.rend() - 1) << std::endl;
	std::cout << *(vc.rend() - 1) << std::endl;

	std::cout << std::endl << "----------> constructors + operator * <----------" << std::endl;
	vector<NoLeaksPlease>::iterator it_def;
	vector<NoLeaksPlease>::const_iterator itc_def;
	vector<NoLeaksPlease>::iterator it_it(v.begin());
	vector<NoLeaksPlease>::const_iterator itc_it(vc.begin() + 1);
	std::cout << *it_it << std::endl;
	std::cout << *itc_it << std::endl;
	vector<NoLeaksPlease>::iterator it_cpy(it_it);
	vector<NoLeaksPlease>::const_iterator itc_cpy(itc_it);
	std::cout << *it_cpy << std::endl;
	std::cout << *itc_cpy << std::endl;

	{
		std::cout << std::endl << "----------> operator -> <----------" << std::endl;
		it_it->showstr();
		itc_it->showstr();
	}

	{
		std::cout << std::endl << "----------> operator + <----------" << std::endl;
		std::cout << *(it_it + 2) << std::endl;
		std::cout << *(itc_it + 2) << std::endl;
		std::cout << *(2 + it_it) << std::endl;
		std::cout << *(2 + itc_it) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator += <----------" << std::endl;
		std::cout << *(it_it += 2) << std::endl;
		std::cout << *(itc_it += 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator - <----------" << std::endl;
		std::cout << *(it_it - 2) << std::endl;
		std::cout << *(itc_it - 2) << std::endl;
		std::cout << it_it - (it_it + 2) << std::endl;
		std::cout << itc_it - (itc_it + 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator -= <----------" << std::endl;
		std::cout << *(it_it -= 2) << std::endl;
		std::cout << *(itc_it -= 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator ++ <----------" << std::endl;
		std::cout << *(++it_it) << std::endl;
		std::cout << *(++itc_it) << std::endl;
		it_it++;
		itc_it++;
		std::cout << *it_it << std::endl;
		std::cout << *itc_it << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator -- <----------" << std::endl;
		std::cout << *(--it_it) << std::endl;
		std::cout << *(--itc_it) << std::endl;
		it_it--;
		itc_it--;
		std::cout << *it_it << std::endl;
		std::cout << *itc_it << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator = <----------" << std::endl;
		std::cout << *(it_it = it_it + 1) << std::endl;
		std::cout << *(itc_it = itc_it + 1) << std::endl;
		std::cout << *(it_it = it_it + 1) << std::endl;
		std::cout << *(itc_it = itc_it + 1) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator [] <----------" << std::endl;
		std::cout << it_it[0] << std::endl;
		std::cout << itc_it[0] << std::endl;
		std::cout << it_it[1] << std::endl;
		std::cout << itc_it[1] << std::endl;
		std::cout << it_it[-1] << std::endl;
		std::cout << itc_it[-1] << std::endl;
	}

	vector<NoLeaksPlease>::iterator tmp = it_it;
	vector<NoLeaksPlease>::const_iterator tmpc = itc_it;
	
	{
		std::cout << std::endl << "----------> operator == <----------" << std::endl;
		std::cout << (tmp == it_it) << std::endl;
		std::cout << (tmpc == itc_it) << std::endl;
		std::cout << (tmp == it_it + 1) << std::endl;
		std::cout << (tmpc == itc_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator != <----------" << std::endl;
		std::cout << (tmp != it_it) << std::endl;
		std::cout << (tmpc != itc_it) << std::endl;
		std::cout << (tmp != it_it + 1) << std::endl;
		std::cout << (tmpc != itc_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator > <----------" << std::endl;
		std::cout << (tmp > it_it) << std::endl;
		std::cout << (tmpc > itc_it) << std::endl;
		std::cout << (tmp > it_it + 1) << std::endl;
		std::cout << (tmpc > itc_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator >= <----------" << std::endl;
		std::cout << (tmp >= it_it) << std::endl;
		std::cout << (tmpc >= itc_it) << std::endl;
		std::cout << (tmp >= it_it + 1) << std::endl;
		std::cout << (tmpc >= itc_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator < <----------" << std::endl;
		std::cout << (tmp < it_it) << std::endl;
		std::cout << (tmpc < itc_it) << std::endl;
		std::cout << (tmp < it_it + 1) << std::endl;
		std::cout << (tmpc < itc_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator <= <----------" << std::endl;
		std::cout << (tmp <= it_it) << std::endl;
		std::cout << (tmpc <= itc_it) << std::endl;
		std::cout << (tmp <= it_it + 1) << std::endl;
		std::cout << (tmpc <= itc_it + 1) << std::endl;
	}
	
	{
		std::cout << std::endl << "----------> other tests <----------" << std::endl;
		std::cout << "* :" << std::endl;
		std::cout << *(vc.begin()) << std::endl;
		long long test_long = 1;
		int test_int = 1;
		char test_char = 1;
		std::cout << *(vc.begin() + test_long) << std::endl;
		std::cout << *(vc.begin() + test_int) << std::endl;
		std::cout << *(vc.begin() + test_char) << std::endl;
	}
		vector<NoLeaksPlease>::const_iterator itc1;
		// itc1 = v.begin();
		// std::cout << *it << std::endl;

}