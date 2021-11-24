#include "test_map.hpp"

void test()
{
   typedef map<int, int> Map;
   typedef pair<int, int> Pair;

   cout << "----------> insert <----------" << endl;
   {
      Map c = ::basic();
      pair<Map::iterator, bool> r;
      print_map<Map>(c);
      r = c.insert(Pair(10000, 10000));
      c[-1] = r.first->second;
      c[-2] = r.second;
      print_map<Map>(c);
      r = c.insert(Pair(-1, -1));
      cout << "inserted: " << r.first->second << endl;
      cout << "inserted: " << c[-1] << endl;
      c[-3] = r.first->second;
      c[-4] = r.second;
      print_map<Map>(c);
   }
   cout << "----------> erase <----------" << endl;
   {
      Map c = ::basic();
      cout << "erase 2: " << c.erase(2) << endl;
      cout << "erase 1: " << c.erase(1) << endl;
      cout << "erase 0: " << c.erase(0) << endl;
      cout << "erase 25: " << c.erase(25) << endl;
      cout << "erase 42: " << c.erase(42) << endl;
      cout << "erase 30: " << c.erase(30) << endl;
      cout << "erase 27: " << c.erase(30) << endl;
      print_map<Map>(c);
      // erase last
      cout << "erase 43 (last): " << c.erase(43) << endl;
      print_map<Map>(c);
      // erase root
      cout << "erase 10 (root): " << c.erase(10) << endl;
      print_map<Map>(c);
      /* result for basic bst:
            15
           /  \
          5    21
           \    \
            8    35
                /  \
               28  84
              / \
            23  29
             \
             24
      */
      // erase root last
      c = Map();
      c[10] = 10;
      cout << "erase 10 (root last): " << c.erase(10) << endl;
      print_map<Map>(c);
   }
   cout << "----------> swap <----------" << endl;
   {
      Map c = ::basic();
      Map c2;
      c2[56] = 3;
      c2[4] = 10;
      c.swap(c2);
      print_map<Map>(c);
      print_map<Map>(c2);
   }
   cout << "----------> clear <----------" << endl;
   {
      Map c = ::basic();
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
      c[50] = 20;
      print_map<Map>(c);
   }
}
