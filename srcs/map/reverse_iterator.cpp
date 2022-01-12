#include "test_map.hpp"

void test()
{
   typedef map<int, int> Map;
   cout << "----------> constructors <----------" << endl;
	{
		Map c(::basic());
		Map::reverse_iterator it(c.rbegin());
		for (; it != c.rend(); ++it)
    		cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		it = c.rbegin();
		for (Map::reverse_iterator it2(it); it != c.rend(); ++it)
    		cout << it2->first << "|" << std::flush << it2->second << " " << std::flush;
		cout << endl;
	}
   cout << "----------> operators <----------" << endl;
	{
		Map c(::basic());
		Map::reverse_iterator it = c.rbegin();
  		for (; it != c.rend(); ++it)
  		  cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		Map::reverse_iterator it2 = c.rbegin();
		cout << "operator==: " << (it == it2) << endl;
		cout << "operator!=: " << (it != it2) << endl;
		cout << "operator*: " << (*it == *it2) << endl;
		cout << "--operator: " << (--it)->first << endl;
		cout << "operator--: " << (it--)->first << endl;
		cout << "++operator: " << (++it2)->first << endl;
		cout << "operator++: " << (it2++)->first << endl;
		cout << "operator==: " << (it == it2) << endl;
		cout << "operator!=: " << (it != it2) << endl;
		cout << "operator*: " << (*it == *it2) << endl;
	}
	cout << "const reverse_iterator:" << endl;
	cout << "----------> constructors <----------" << endl;
	{
		Map c(::basic());
		Map::const_reverse_iterator it(c.rbegin());
  		for (; it != c.rend(); ++it)
    		cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		for (Map::const_reverse_iterator it2(c.rbegin()); it != c.rend(); ++it2)
    		cout << it2->first << "|" << std::flush << it2->second << " " << std::flush;
		cout << endl;
	}
   cout << "----------> operators <----------" << endl;
	{
		Map c(::basic());
		Map::const_reverse_iterator it = c.rbegin();
  		for (; it != c.rend(); ++it)
  		  cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		Map::const_reverse_iterator it2 = c.rbegin();
		cout << "operator==: " << (it == it2) << endl;
		cout << "operator!=: " << (it != it2) << endl;
		cout << "operator*: " << (*it == *it2) << endl;
		cout << "--operator: " << (--it)->first << endl;
		cout << "operator--: " << (it--)->first << endl;
		cout << "++operator: " << (++it2)->first << endl;
		cout << "operator++: " << (it2++)->first << endl;
		cout << "operator==: " << (it == it2) << endl;
		cout << "operator!=: " << (it != it2) << endl;
		cout << "operator*: " << (*it == *it2) << endl;
	}
}
