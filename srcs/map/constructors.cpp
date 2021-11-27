#include "test_map.hpp"

void test()
{
	cout << "----------> constructors <----------" << endl;
   {
   	typedef map<int, int> Map;
      Map c;
      print_map<Map>(c);
      c = ::basic();
      Map c2(c.begin(), c.end());
      print_map<Map>(c2);
      Map c3(c2);
      print_map<Map>(c3);
   }
   cout << "----------> constructors <----------" << endl;
   {
   	typedef const map<int, int> Map;
      Map c;
      print_map<Map>(c);
      Map c1(::basic());
      Map c2(c1.begin(), c1.end());
      print_map<Map>(c2);
      Map c3(c2);
      print_map<Map>(c3);
	}
}
