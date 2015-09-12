// copy2.cpp
#include "algotest.hpp"
using namespace std;


int main ()
{
	vector <char> source (10, '.');

	for (int c = 'a'; c<= 'f'; c++)
	    source.push_back(c);
	source.insert (source.end(), 10, '.');

	PRINT_ELEMS (source, "source: ");

}


/*

g++ -std=c++11 copy2.cpp -o copy2

*/
