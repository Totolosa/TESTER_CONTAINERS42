#include "test_map.hpp"

void test()
{
	cout << "----------> empty <----------" << endl;
	{
		typedef map<int, int> Map;
			Map c;
		cout << "empty: " << c.empty() << endl;
		print_map<Map>(c);
		c = ::basic();
		cout << "empty: " << c.empty() << endl;
		print_map<Map>(c);
		c.clear();
		cout << "empty: " << c.empty() << endl;
		print_map<Map>(c);
		c[10] = 9;
		cout << "empty: " << c.empty() << endl;
		print_map<Map>(c);
		c.clear();
		print_map<Map>(c);
		c[2] = 42;
		print_map<Map>(c);
		}
	cout << "----------> const empty <----------" << endl;
	{
		typedef const map<int, int> Map;
		Map c = ::basic();
		cout << "empty: " << c.empty() << endl;
		Map c2;
		cout << "empty: " << c2.empty() << endl;
	}
	cout << "----------> size <----------" << endl;
	{
		typedef map<int, int> Map;
		Map c = Map();
		cout << "size = " << c.size() << endl;
		c[0] = 1;
		c[-1] = 2;
		cout << "size = " << c.size() << endl;
		c.clear();
		cout << "size = " << c.size() << endl;
	}
	cout << "----------> const size <----------" << endl;
	{
		typedef const map<int, int> Map;
		Map c = Map();
		cout << "size = " << c.size() << endl;
		Map c2 = ::basic();
		cout << "size = " << c2.size() << endl;
	}
}
