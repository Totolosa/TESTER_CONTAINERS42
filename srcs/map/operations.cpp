#include "test_map.hpp"

void test()
{
	cout << "----------> find & count <----------" << endl;
	{
   	typedef map<int, int> Map;
		Map c = ::basic();
		Map::iterator i = c.find(2);
		cout << "find 2: " << (i != c.end()) << endl;
		cout << "count 2: " << c.count(2) << endl;
		i = c.find(42);
		cout << "find 42: " << (i != c.end()) << endl;
		cout << "count 42: " << c.count(42) << endl;
		i = c.find(50);
		cout << "find 50: " << (i != c.end()) << endl;
		cout << "count 50: " << c.count(50) << endl;
	}
   cout << "----------> const find & count <----------" << endl;
   {
   	typedef const map<int, int> Map;
      Map c2(::basic());
      Map::const_iterator it = c2.find(2);
      cout << "find 2: " << (it != c2.end()) << endl;
      cout << "count 2: " << c2.count(2) << endl;
      it = c2.find(42);
      cout << "find 42: " << (it != c2.end()) << endl;
      cout << "count 42: " << c2.count(42) << endl;
      it = c2.find(50);
      cout << "find 50: " << (it != c2.end()) << endl;
      cout << "count 50: " << c2.count(50) << endl;
   }
	cout << "----------> bound <----------" << endl;
	{
   	typedef map<int, int> Map;
		Map c(::basic());
		Map::iterator it = c.lower_bound(2);
		cout << "lower_bound: " << it->first << endl;
		it = c.upper_bound(2);
		cout << "upper_bound: " << it->first << endl;
	}
   cout << "----------> const bound <----------" << endl;
   {
   	typedef const map<int, int> Map;
      Map c(::basic());
      Map::const_iterator it = c.lower_bound(2);
      cout << "lower_bound: " << it->first << endl;
      it = c.upper_bound(2);
      cout << "upper_bound: " << it->first << endl;
   }
}
