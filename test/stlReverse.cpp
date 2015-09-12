// stlReverse.cpp
#include "algotest.hpp"
using namespace std;


int main ()
{
	list <int> coll {1, 2, 3, 5, 7, 9, 22, 65} ;
  list <int> :: iterator iterator;
	PRINT_ELEMS (coll, "coll:  ");

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
}


/*

g++ -std=c++11 stlReverse.cpp -o stlReverse

*/
