// rotate2.cpp
#include "algotest.hpp"
using namespace std;


int main ()
{
  //set <int> coll;
  vector <int> coll {2, 43, 43, 3, 6, 67, 1, 9, 5, 10, 13};
	INSERT_ELEMS (coll, 1, 16);
	PRINT_ELEMS (coll, "coll:  ");
	sort (coll.begin(), coll.end());
	PRINT_ELEMS (coll, "sorted coll:  ");


	set <int> coll1 ;
	INSERT_ELEMS (coll1, 1, 16);
	//PRINT_ELEMS (coll1, "coll1:  ");
	set <int> :: const_iterator pos = next (coll1.cbegin());
  rotate_copy (coll1.cbegin(), pos, coll1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	pos = coll1.cend();
	advance(pos, -2);

  rotate_copy (coll1.cbegin(), pos, coll1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

	rotate_copy (coll1.cbegin(), coll1.find(4), coll1.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;

}

/*
	reverse_copy (coll.begin(), coll.end(), back_inserter(coll));

  PRINT_ELEMS (coll, "coll:  ");

  iterator = coll.begin();

	iterator ++; iterator ++;
	rotate (coll.begin(), iterator, coll.end());

  PRINT_ELEMS (coll, "coll:  ");

	//coll.clear();
	vector <int> coll0;
	INSERT_ELEMS(coll0,1,9);
  PRINT_ELEMS(coll0,"coll: ");

	rotate (coll0.begin(),coll0.begin() + 1, coll0.end());
  PRINT_ELEMS(coll0,"one left: ");


	rotate (coll0.begin(),coll0.end() -2, coll0.end());
	PRINT_ELEMS(coll0,"two right: ");
*/

/*

g++ -std=c++11 rotate2.cpp -o rotate2

*/
