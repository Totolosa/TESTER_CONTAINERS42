#include "test_vector.hpp"
#include "lexicographical_compare.hpp"
# ifndef MINE
	int _std = 1;
#else
	int _std  = 0;
#endif

template <typename T>
bool ft_size(T & a, T & b) {
	if (a.size() < b.size() )
		return true;
	return false;
}

void test() {
	vector<std::string> v;
	vector<std::string> v_empty;
	v.push_back("un");
	v.push_back("deux");
	v.push_back("trois");
	const vector<std::string> vc(v);
	vector<std::string> vbis(v);
	vector<std::string> vdiff(v);
	vdiff.pop_back();
	vdiff.push_back("huit");
	vector<std::string> vdiff2(v);
	vdiff2.pop_back();
	vdiff2.push_back("trois 3");
	vector<std::string> vdiff3(v);
	vdiff3.pop_back();
	vdiff3.push_back("troi3");
	vector<std::string> vplus(v);
	vplus.push_back("quatre");

	std::cout << "v :" << std::endl;
	print_vec<vector<std::string> >(v);
	std::cout << "vbis :" << std::endl;
	print_vec<vector<std::string> >(vbis);
	std::cout << "vdiff :" << std::endl;
	print_vec<vector<std::string> >(vdiff);
	std::cout << "vdiff2 :" << std::endl;
	print_vec<vector<std::string> >(vdiff2);
	std::cout << "vdiff3 :" << std::endl;
	print_vec<vector<std::string> >(vdiff3);
	std::cout << "vplus :" << std::endl;
	print_vec<vector<std::string> >(vplus);

	std::cout << "----------> lexicographical_compare <----------" << std::endl;
	if (_std == 1) {
		std::cout << "lexico_compare v et v_empty = " << std::lexicographical_compare(v.begin(), v.end(), v_empty.begin(), v_empty.end()) << std::endl;
		std::cout << "lexico_compare v et vc = " << std::lexicographical_compare(v.begin(), v.end(), vc.begin(), vc.end()) << std::endl;
		std::cout << "lexico_compare v et vbis = " << std::lexicographical_compare(v.begin(), v.end(), vbis.begin(), vbis.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff = " << std::lexicographical_compare(v.begin(), v.end(), vdiff.begin(), vdiff.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff2 = " << std::lexicographical_compare(v.begin(), v.end(), vdiff2.begin(), vdiff2.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff2 = " << std::lexicographical_compare(vdiff2.begin(), vdiff2.end(), v.begin(), v.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff3 = " << std::lexicographical_compare(v.begin(), v.end(), vdiff3.begin(), vdiff3.end()) << std::endl;
		std::cout << "lexico_compare v et vplus = " << std::lexicographical_compare(v.begin(), v.end(), vplus.begin(), vplus.end()) << std::endl;
		// pas a faire ???
		// std::cout << "lexico_compare+comp v et vdiff = " << std::lexicographical_compare(v.begin(), v.end(), vdiff.begin(), vdiff.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vdiff2 = " << std::lexicographical_compare(v.begin(), v.end(), vdiff2.begin(), vdiff2.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vdiff3 = " << std::lexicographical_compare(v.begin(), v.end(), vdiff3.begin(), vdiff3.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vplus = " << std::lexicographical_compare(v.begin(), v.end(), vplus.begin(), vplus.end(), ft_size<std::string>) << std::endl;
	}
	else {
		std::cout << "lexico_compare v et v_empty = " << ft::lexicographical_compare(v.begin(), v.end(), v_empty.begin(), v_empty.end()) << std::endl;
		std::cout << "lexico_compare v et vc = " << ft::lexicographical_compare(v.begin(), v.end(), vc.begin(), vc.end()) << std::endl;
		std::cout << "lexico_compare v et vbis = " << ft::lexicographical_compare(v.begin(), v.end(), vbis.begin(), vbis.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff.begin(), vdiff.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff2 = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff2.begin(), vdiff2.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff2 = " << ft::lexicographical_compare(vdiff2.begin(), vdiff2.end(), v.begin(), v.end()) << std::endl;
		std::cout << "lexico_compare v et vdiff3 = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff3.begin(), vdiff3.end()) << std::endl;
		std::cout << "lexico_compare v et vplus = " << ft::lexicographical_compare(v.begin(), v.end(), vplus.begin(), vplus.end()) << std::endl;
		// std::cout << "lexico_compare+comp v et vdiff = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff.begin(), vdiff.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vdiff2 = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff2.begin(), vdiff2.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vdiff3 = " << ft::lexicographical_compare(v.begin(), v.end(), vdiff3.begin(), vdiff3.end(), ft_size<std::string>) << std::endl;
		// std::cout << "lexico_compare+comp v et vplus = " << ft::lexicographical_compare(v.begin(), v.end(), vplus.begin(), vplus.end(), ft_size<std::string>) << std::endl;
	}

}
