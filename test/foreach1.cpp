#include "algotest.hpp"
using namespace std;

int main()
{
	vector<int> coll;

	INSERT_ELEMS(coll,1,9);

	for_each (coll.cbegin(), coll.cend(),	[](int elem) {cout << elem << ’ ’;});
	cout << endl;
}
