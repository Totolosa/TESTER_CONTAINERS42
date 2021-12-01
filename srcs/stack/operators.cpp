#include "test_stack.hpp"

void test() {
	typedef stack<int> Stack;
	Stack c1 = ::basic();
	Stack c2 = ::basic();
	Stack c3 = ::basic();
	c3.push(6);
	Stack c4;
	c4.push(1);
	c4.push(2);
	c4.push(3);
	c4.push(5);
	c4.push(6);
   cout << "----------> = <----------" << endl;
	{
		Stack c = c3;
		print_stack(c);
		c = c4;
		print_stack(c);
	}
   cout << "----------> == <----------" << endl;
	cout << "c1 == c2: " << (c1 == c2) << endl;
	cout << "c1 == c3: " << (c1 == c3) << endl;
	cout << "c1 == c4: " << (c1 == c4) << endl;
	cout << "----------> != <----------" << endl;
	cout << "c1 != c2: " << (c1 != c2) << endl;
	cout << "c1 != c3: " << (c1 != c3) << endl;
	cout << "c1 != c4: " << (c1 != c4) << endl;
	cout << "----------> < <----------" << endl;
	cout << "c1 < c2: " << (c1 < c2) << endl;
	cout << "c1 < c3: " << (c1 < c3) << endl;
	cout << "c1 < c4: " << (c1 < c4) << endl;
	cout << "----------> > <----------" << endl;
	cout << "c1 > c2: " << (c1 > c2) << endl;
	cout << "c1 > c3: " << (c1 > c3) << endl;
	cout << "c1 > c4: " << (c1 > c4) << endl;
	cout << "----------> <= <----------" << endl;
	cout << "c1 <= c2: " << (c1 <= c2) << endl;
	cout << "c1 <= c3: " << (c1 <= c3) << endl;
	cout << "c1 <= c4: " << (c1 <= c4) << endl;
	cout << "----------> >= <----------" << endl;
	cout << "c1 >= c2: " << (c1 >= c2) << endl;
	cout << "c1 >= c3: " << (c1 >= c3) << endl;
	cout << "c1 >= c4: " << (c1 >= c4) << endl;
}

