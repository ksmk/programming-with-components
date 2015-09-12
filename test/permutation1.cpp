// permutation1.cpp
#include "algotest.hpp"
using namespace std;

int main ()
{

  vector <int> coll;
	INSERT_ELEMS (coll, 1, 4);
	PRINT_ELEMS (coll, "before:  ");
  // permute until sorted

  while (next_permutation(coll.begin(), coll.end()))  {PRINT_ELEMS (coll, " ");}
  PRINT_ELEMS (coll, "after:  ");
  while (prev_permutation(coll.begin(), coll.end()))  {PRINT_ELEMS (coll, " ");}
  PRINT_ELEMS (coll, "now:  ");
  while (prev_permutation(coll.begin(), coll.end()))  {PRINT_ELEMS (coll, " ");}
  PRINT_ELEMS (coll, "and now?:  ");
}

/*
g++ -std=c++11 permutation1.cpp -o permutation1
*/

/*

template <typename T>
inline
void INSERT_ELEMS (T& coll, int first, int last)
{
	for (int i=first; i<=last; ++i)
		coll.insert(coll.end(), i);
}

template <typename T>
inline
void PRINT_ELEMS (const T& coll, const std::string& wtf="")
{
	std:: cout << wtf;
	for (auto elem : coll)
	{
		std:: cout << elem << ' ';
	}
	std:: cout << std:: endl;
}


*/
