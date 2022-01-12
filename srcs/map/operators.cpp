#include "test_map.hpp"

void test()
{
	cout << "----------> operators <----------" << endl;
	{
		typedef map<int, int> Map;
		Map c = ::basic();
		Map c2 = ::basic();
		c2[1] = c[2];
		cout << "operator==: " << (c == c2) << endl;
		cout << "operator!=: " << (c != c2) << endl;
		cout << "operator<: " << (c < c2) << endl;
		cout << "operator>: " << (c > c2) << endl;
		cout << "operator<=: " << (c <= c2) << endl;
		cout << "operator>=: " << (c >= c2) << endl;
		c2[-1] = 2;
		cout << "operator==: " << (c == c2) << endl;
		cout << "operator!=: " << (c != c2) << endl;
		cout << "operator<: " << (c < c2) << endl;
		cout << "operator>: " << (c > c2) << endl;
		cout << "operator<=: " << (c <= c2) << endl;
		cout << "operator>=: " << (c >= c2) << endl;
		c2 = c;
		cout << "operator==: " << (c == c2) << endl;
		cout << "operator!=: " << (c != c2) << endl;
		cout << "operator<: " << (c < c2) << endl;
		cout << "operator>: " << (c > c2) << endl;
		cout << "operator<=: " << (c <= c2) << endl;
		cout << "operator>=: " << (c >= c2) << endl;
		cout << endl;
	}
	cout << "----------> const operators <----------" << endl;
	{
		typedef const map<int, int> Map;
		Map c = ::basic();
		Map c2 = ::basic();
		cout << "operator==: " << (c == c2) << endl;
		cout << "operator!=: " << (c != c2) << endl;
		cout << "operator<: " << (c < c2) << endl;
		cout << "operator>: " << (c > c2) << endl;
		cout << "operator<=: " << (c <= c2) << endl;
		cout << "operator>=: " << (c >= c2) << endl;
	}
	cout << "----------> const + no const operators <----------" << endl;
	{
		map<int, int> c = ::basic();
		const map<int, int> c2 = ::basic();
		cout << "operator==: " << (c == c2) << endl;
		cout << "operator!=: " << (c != c2) << endl;
		cout << "operator<: " << (c < c2) << endl;
		cout << "operator>: " << (c > c2) << endl;
		cout << "operator<=: " << (c <= c2) << endl;
		cout << "operator>=: " << (c >= c2) << endl;
	}
	
}
