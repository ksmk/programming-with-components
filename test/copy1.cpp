// copy1.cpp
#include "algotest.hpp"
using namespace std;


int main ()
{
	vector <string> coll1 = { "Hello", "this", "example", "is" };
	list <string> coll2;

	copy (coll1.cbegin(), coll1.cend(), back_inserter(coll2)); //copy coll1 to coll2 source_range -> destination range
	copy (coll2.cbegin(), coll2.cend(), ostream_iterator<string>(cout, " ")); //print coll2
	cout << endl;

  copy (coll1.crbegin(), coll1.crend(), coll2.begin()); // reverse order - overwriting
  copy (coll2.cbegin(), coll2.cend(), ostream_iterator<string>(cout, " ")); //print coll2
	cout << endl;

}


/*

g++ -std=c++11 copy1.cpp -o copy1

*/
