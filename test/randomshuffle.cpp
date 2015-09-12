// randomshuffle.cpp
#include "algotest.hpp"
using namespace std;

int main ()
{

  vector <int> coll;
	INSERT_ELEMS (coll, 1, 12);
	PRINT_ELEMS (coll, "before:  ");

  random_shuffle (coll.begin(), coll.end());
  PRINT_ELEMS (coll, "after:  ");

  sort (coll.begin(), coll.end());
  PRINT_ELEMS (coll, "and now?:  ");
}

/*
g++ -std=c++11 randomshuffle.cpp -o randomshuffle

*/
