#include "test_map.hpp"

void test()
{
	typedef map<int, int> Map;
	typedef pair<int, int> Pair;

	cout << "----------> insert <----------" << endl;
	// {
		Map c = ::basic();
		Map::iterator it;
		pair<Map::iterator, bool> r;
		print_map<Map>(c);
		r = c.insert(Pair(10000, 10000));
		cout << "inserted: " << r.first->second << endl;
		cout << "add: " << r.second << endl;
		print_map<Map>(c);
		r = c.insert(Pair(-1, -1));
		cout << "inserted: " << r.first->second << endl;
		cout << "inserted: " << c[-1] << endl;
		cout << "add: " << r.second << endl;
		print_map<Map>(c);
		r = c.insert(Pair(1, 1));
		cout << "inserted: " << r.first->second << endl;
		cout << "inserted: " << c[-1] << endl;
		cout << "add: " << r.second << endl;
		print_map<Map>(c);
		it = c.insert(c.begin(), Pair(5, 5));
		cout << "inserted: " << it->first << endl;
		cout << "inserted: " << it->second << endl;
		print_map<Map>(c);
		Pair tab[10];
		for (int i = 0; i < 10; i++)
			tab[i] = Pair(i, i);
		c.insert(&tab[0], &tab[10]);
		print_map<Map>(c);
	// }
		std::cout << "TEST" << std::endl;
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
		c = ::basic();
		c.erase(c.begin());
		print_map<Map>(c);
		c.erase(c.begin(), c.end());
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
