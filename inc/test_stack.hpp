#include <iostream>
#ifdef MINE
  #include "stack.hpp"
  #include "vector.hpp"
  using namespace ft;
#else
  #include <stack>
  #include <vector>
  using namespace std;
#endif

using std::cout;
using std::endl;

stack<int> basic()
{
   stack<int> c;
	c.push(1);
	c.push(2);
	c.push(3);
	c.push(4);
	c.push(5);
   return c;
}

template <typename C>
void print_stack(C & c) {
	for (; !(c.empty()); c.pop())
		std::cout << c.top() << "|" << std::flush;
	std::cout << std::endl << "size = " << c.size() << std::endl;
}
