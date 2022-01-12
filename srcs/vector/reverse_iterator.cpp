#include "test_vector.hpp"

void test() {
	vector<NoLeaksPlease> v;
	vector<NoLeaksPlease> vempty;
	v.push_back(NoLeaksPlease(2, "test1"));
	v.push_back(NoLeaksPlease(2, "test2"));
	v.push_back(NoLeaksPlease(2, "test3"));
	v.push_back(NoLeaksPlease(2, "test4"));
	v.push_back(NoLeaksPlease(2, "test5"));
	const vector<NoLeaksPlease> vc(v);
	print_vec<vector<NoLeaksPlease> >(v);

	// typedef vector<NoLeaksPlease>::iterator iterator;
	// typedef vector<NoLeaksPlease>::const_iterator const_iterator;

	std::cout << std::endl << "----------> constructors + operator * <----------" << std::endl;
	vector<NoLeaksPlease>::reverse_iterator rit_def;
	vector<NoLeaksPlease>::const_reverse_iterator rcit_def;
	vector<NoLeaksPlease>::reverse_iterator rit_it(v.end());
	vector<NoLeaksPlease>::const_reverse_iterator rcit_it(vc.end() - 1);
	std::cout << *rit_it << std::endl;
	std::cout << *rcit_it << std::endl;
	vector<NoLeaksPlease>::reverse_iterator rit_cpy(rit_it);
	vector<NoLeaksPlease>::const_reverse_iterator rcit_cpy(rcit_it);
	std::cout << *rit_cpy << std::endl;
	std::cout << *rcit_cpy << std::endl;

	{
		std::cout << std::endl << "----------> base <----------" << std::endl;
		std::cout << *(rit_it.base()) << std::endl;
		std::cout << *(rcit_it.base()) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator -> <----------" << std::endl;
		rit_it->showstr();
		rcit_it->showstr();
	}

	{
		std::cout << std::endl << "----------> operator + <----------" << std::endl;
		std::cout << *(rit_it + 2) << std::endl;
		std::cout << *(rcit_it + 2) << std::endl;
		std::cout << *(2 + rit_it) << std::endl;
		std::cout << *(2 + rcit_it) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator += <----------" << std::endl;
		std::cout << *(rit_it += 2) << std::endl;
		std::cout << *(rcit_it += 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator - <----------" << std::endl;
		std::cout << *(rit_it - 2) << std::endl;
		std::cout << *(rcit_it - 2) << std::endl;
		std::cout << rit_it - (rit_it + 2) << std::endl;
		std::cout << rcit_it - (rcit_it + 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator -= <----------" << std::endl;
		std::cout << *(rit_it -= 2) << std::endl;
		std::cout << *(rcit_it -= 2) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator ++ <----------" << std::endl;
		std::cout << *(++rit_it) << std::endl;
		std::cout << *(++rcit_it) << std::endl;
		rit_it++;
		rcit_it++;
		std::cout << *rit_it << std::endl;
		std::cout << *rcit_it << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator -- <----------" << std::endl;
		std::cout << *(--rit_it) << std::endl;
		std::cout << *(--rcit_it) << std::endl;
		rit_it--;
		rcit_it--;
		std::cout << *rit_it << std::endl;
		std::cout << *rcit_it << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator = <----------" << std::endl;
		std::cout << *(rit_it = rit_it + 1) << std::endl;
		std::cout << *(rcit_it = rcit_it + 1) << std::endl;
		std::cout << *(rit_it = rit_it + 1) << std::endl;
		std::cout << *(rcit_it = rcit_it + 1) << std::endl;
	}

	{
		std::cout << std::endl << "----------> operator [] <----------" << std::endl;
		std::cout << rit_it[0] << std::endl;
		std::cout << rcit_it[0] << std::endl;
		std::cout << rit_it[1] << std::endl;
		std::cout << rcit_it[1] << std::endl;
		std::cout << rit_it[2] << std::endl;
		std::cout << rcit_it[2] << std::endl;
		std::cout << rit_it[-1] << std::endl;
		std::cout << rcit_it[-1] << std::endl;
	}

	vector<NoLeaksPlease>::reverse_iterator tmp = rit_it;
	vector<NoLeaksPlease>::const_reverse_iterator tmpc = rcit_it;
	
	{
		std::cout << std::endl << "----------> operator == <----------" << std::endl;
		std::cout << (tmp == rit_it) << std::endl;
		std::cout << (tmpc == rcit_it) << std::endl;
		std::cout << (tmp == rit_it + 1) << std::endl;
		std::cout << (tmpc == rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator != <----------" << std::endl;
		std::cout << (tmp != rit_it) << std::endl;
		std::cout << (tmpc != rcit_it) << std::endl;
		std::cout << (tmp != rit_it + 1) << std::endl;
		std::cout << (tmpc != rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator > <----------" << std::endl;
		std::cout << (tmp > rit_it) << std::endl;
		std::cout << (tmpc > rcit_it) << std::endl;
		std::cout << (tmp > rit_it + 1) << std::endl;
		std::cout << (tmpc > rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator >= <----------" << std::endl;
		std::cout << (tmp >= rit_it) << std::endl;
		std::cout << (tmpc >= rcit_it) << std::endl;
		std::cout << (tmp >= rit_it + 1) << std::endl;
		std::cout << (tmpc >= rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator < <----------" << std::endl;
		std::cout << (tmp < rit_it) << std::endl;
		std::cout << (tmpc < rcit_it) << std::endl;
		std::cout << (tmp < rit_it + 1) << std::endl;
		std::cout << (tmpc < rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> operator <= <----------" << std::endl;
		std::cout << (tmp <= rit_it) << std::endl;
		std::cout << (tmpc <= rcit_it) << std::endl;
		std::cout << (tmp <= rit_it + 1) << std::endl;
		std::cout << (tmpc <= rcit_it + 1) << std::endl;
	}
	{
		std::cout << std::endl << "----------> other tests <----------" << std::endl;
		vector<NoLeaksPlease>::const_reverse_iterator itc1;
		itc1 = v.rbegin();
		std::cout << *itc1 << std::endl;
		vector<NoLeaksPlease>::const_reverse_iterator itc2(v.begin());
		std::cout << *itc2 << std::endl;
		
		// vector<NoLeaksPlease>::vector_reverse_iterator it1 = itc1;
		// std::cout << *it1 << std::endl;
	}
}