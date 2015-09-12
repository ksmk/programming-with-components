// count1.cpp
#include "algotest.hpp"
using namespace std;

int main ()
{
	vector <int> coll;
	int num;

	INSERT_ELEMS (coll, 1, 9);
	PRINT_ELEMS (coll, "coll: ");
	num = count (coll.cbegin(), coll.cend(), 4);
	cout << num << endl;

	// cbegin cend
	num = count_if (coll.cbegin(), coll.cend(), [](int elem){return elem%2==0;} );
  cout << num << endl;


}


/*

g++ -std=c++11 count1.cpp -o count1

*/
