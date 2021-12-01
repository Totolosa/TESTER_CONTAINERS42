#include "test_stack.hpp"
#include <vector>

void test()
{
	cout << "----------> default <----------" << endl;
	{
		typedef stack<int> Stack;
		Stack c;
		print_stack(c);
	}
	cout << "----------> container <----------" << endl;
	{
		typedef stack<int, vector<int> > Stack;
		vector<int> v(5, 5);
		Stack c(v);
		c.push(4);
		print_stack(c);
	}
}
