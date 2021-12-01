#include "test_stack.hpp"

void test() {
	typedef stack<int> Stack;
   cout << "----------> empty <----------" << endl;
	{
		Stack s;
		cout << "empty: " << s.empty() << endl;
		s.push(1);
		cout << "empty: " << s.empty() << endl;
		s.pop();
		cout << "size: " << s.size() << endl;
	}
	cout << "----------> size <----------" << endl;
	{
		Stack s;
		cout << "size: " << s.size() << endl;
		s.push(1);
		cout << "size: " << s.size() << endl;
		s.push(2);
		cout << "size: " << s.size() << endl;
		s.pop();
		cout << "size: " << s.size() << endl;
		s.pop();
		cout << "size: " << s.size() << endl;
	}
	cout << "----------> top <----------" << endl;
	{
		Stack s;
		s.push(1);
		cout << "top: " << s.top() << endl;
		s.push(2);
		cout << "top: " << s.top() << endl;
		s.pop();
		cout << "top: " << s.top() << endl;
		s.pop();
	}
   cout << "----------> push & pop <----------" << endl;
	{
		Stack s;
		s.push(1);
		s.push(2);
		s.pop();
		print_stack(s);
	}
}
