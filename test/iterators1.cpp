// iterators1.cpp
#include "algotest.hpp"
using namespace std;

int main ()
{
  vector <int> coll;
  vector <int>:: iterator pos;
  for (int i =-3; i <=9; ++i)
    coll.push_back(i);

  for (pos = coll.begin(); pos < coll.end(); ++ pos)
    cout << *pos << ' ';
  cout << endl;
	PRINT_ELEMS (coll, "coll:  ");

  for (int i=0; i<coll.size(); ++i)
    cout << coll.begin()[i] << ’ ’;


}

/*
g++ -std=c++11  iterators1.cpp -o  iterators1

*/
