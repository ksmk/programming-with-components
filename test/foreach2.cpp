// algo/foreach2.cpp
#include "algotest.hpp"
using namespace std;
int main()
{
	vector<int> coll;
	INSERT_ELEMS(coll,1,9);

	// add 10 to each element
	for_each (coll.begin(), coll.end(),
						[](int& elem){
							 elem += 10;
						});

	PRINT_ELEMS(coll);

	// add value of first element to each element
	for_each (coll.begin(), coll.end(),
					  [=](int& elem){
								elem += *coll.begin();
						});

	PRINT_ELEMS(coll);
}

//g++ -std=c++11 foreach2.cpp -o foreach2
