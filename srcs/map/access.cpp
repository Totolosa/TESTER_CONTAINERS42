#include "test_map.hpp"

void test()
{
   cout << "----------> [] <----------" << endl;
   {
   	typedef map<int, int> Map;
      Map c = ::basic();
      c[0] = c[1];
      c[2] = c[3];
      c[2] = c[0];
      c[10] = c[9];
      c[102];
      print_map<Map>(c);
   }
}
