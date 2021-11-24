#include "test_map.hpp"

void test()
{
   cout << "----------> observers <----------" << endl;
   {
   	typedef map<int, int> Map;
      Map c = ::basic();
      cout << c.key_comp()(10, 2) << endl;
      // cout << c.value_comp()(10, 2) << endl;
      c.get_allocator();
   }
	cout << "----------> const observers <----------" << endl;
   {
   	typedef const map<int, int> Map;
      Map c = ::basic();
      cout << c.key_comp()(10, 2) << endl;
      // cout << c.value_comp()(10, 2) << endl;
      c.get_allocator();
   }
}
