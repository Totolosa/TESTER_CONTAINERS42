#include "test_map.hpp"

void test()
{
   cout << "----------> [] <----------" << endl;
   {
   	typedef map<int, NoLeaksPlease> Map;
      Map c;
      c[1] = NoLeaksPlease(1);
      c[2] = NoLeaksPlease(2);
      c[3] = NoLeaksPlease(3);
      c[4] = NoLeaksPlease(4);
      c[5] = NoLeaksPlease(5);
      c[0] = c[1];
      c[2] = c[3];
      c[2] = c[0];
      c[10] = c[9];
      c[102];
      print_map<Map>(c);
   }
}
