#include "test_map.hpp"

void test()
{
   typedef map<int, int> Map;
   cout << "----------> constructors <----------" << endl;
	{
		Map c(::basic());
		Map::iterator it(c.begin());
		for (; it != c.end(); ++it)
    		cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		it = c.begin();
		for (Map::iterator it2(it); it != c.end(); ++it)
    		cout << it2->first << "|" << std::flush << it2->second << " " << std::flush;
		cout << endl;
	}
   cout << "----------> operators <----------" << endl;
	{
		Map c(::basic());
		Map::iterator it = c.begin();
  		for (; it != c.end(); ++it)
  		  cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		Map::iterator it2 = c.begin();
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
	cout << "const iterator:" << endl;
	cout << "----------> constructors <----------" << endl;
	{
		Map c(::basic());
		Map::const_iterator it(c.begin());
  		for (; it != c.end(); ++it)
    		cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		for (Map::const_iterator it2(c.begin()); it != c.end(); ++it2)
    		cout << it2->first << "|" << std::flush << it2->second << " " << std::flush;
		cout << endl;
	}
   cout << "----------> operators <----------" << endl;
	{
		Map c(::basic());
		Map::const_iterator it = c.begin();
  		for (; it != c.end(); ++it)
  		  cout << it->first << "|" << std::flush << it->second << " " << std::flush;
		cout << endl;
		Map::const_iterator it2 = c.begin();
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
