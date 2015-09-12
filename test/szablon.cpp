// szablon.cpp
#include "algotest.hpp"
#include "template.hpp"
using namespace std;

struct Base {
  void print_usual();
  virtual void print_virt();
  virtual ~Base(){cout<<"Base destructor called\n";}
};

struct Derived : public Base {
  void print_usual();
  virtual void print_virt();
  ~Derived(){cout<<"Derived destructor called\n";}
};

void Derived::print_usual() {cout << "Derived usual" << endl; }
void Derived::print_virt() {cout << "Derived virtual" << endl; }

void Base::print_usual() {cout << "Base usual" << endl; }
void Base::print_virt() {cout << "Base virtual" << endl; }


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

  Base *ptr = new Base();
  ptr->print_usual();
  ptr->print_virt();

  Base *dtr = new Derived();
  dtr->print_usual();
  dtr->print_virt();

  delete dtr, ptr;
}

/*

g++ -std=c++11 szablon.cpp -o  szablon

*/
