// powerbase.cpp
#include "algotest.hpp"
using namespace std;

struct Number {
public:
  Number (const int& v, const int& b) : val (v), base (b) {}
  ~Number () {cout << "Called" << endl; }
	int val, base;
private:
	//int val, base;
  friend ostream& operator << (ostream& os, const Number& n);
};



/*

Number::func()
{
	//ostream& operator << (ostream& os, const Number& n)
}

*/

// ar crs nazwa src.o ....

int main ()
{
	Number *p;
	p = new Number (2,6);
	cout << p->val << '\t' << p->base << endl;
	//cout << p(val) << '\t' << p(base) << endl;
	delete p;



/*
  vector <int> coll;
  vector <int>:: iterator pos;
  for (int i =-3; i <=9; ++i)
    coll.push_back(i);

  for (pos = coll.begin(); pos < coll.end(); ++ pos)
    cout << *pos << ' ';
  cout << endl;
	PRINT_ELEMS (coll, "coll:  ");

  Base *ptr = new Base();
  ptr->print_usual();
  ptr->print_virt();

  Base *dtr = new Derived();
  dtr->print_usual();
  dtr->print_virt();

  delete dtr, ptr;
*/

}


/*

g++ -std=c++11 powerbase.cpp -o powerbase

*/
