#include <iostream>
#ifdef MINE
#include "map.hpp"
using namespace ft;
#else
#include <map>
using namespace std;
#endif

using std::cout;
using std::endl;

/*
            10
           /  \
          5    21
         / \   / \
        2   8 15  30
       /         /  \
      1        25    42
              / \    / \
            23  27  35  84
             \    \     /
             24   29   43
                  /
                 28
*/
map<int, int> basic()
{
   map<int, int> c;
   c[10] = 10;
   c[5] = 5;
   c[21] = 21;
   c[2] = 2;
   c[8] = 8;
   c[15] = 15;
   c[30] = 30;
   c[1] = 1;
   c[25] = 25;
   c[42] = 42;
   c[23] = 23;
   c[27] = 27;
   c[35] = 35;
   c[84] = 84;
   c[24] = 24;
   c[29] = 29;
   c[28] = 28;
   c[43] = 43;
   return c;
}

template <typename C>
void print_map(C &c)
{
  for (typename C::iterator it = c.begin(); it != c.end(); ++it)
    cout << it->first << "|" << std::flush << it->second << " " << std::flush;
  cout << endl
       << "size = " << c.size() << endl;
}

template <typename C>
void print_map(const C &c)
{
  for (typename C::const_iterator it = c.begin(); it != c.end(); ++it)
    cout << it->first << "|" << std::flush << it->second << " " << std::flush;
  cout << endl
       << "size = " << c.size() << endl;
}
