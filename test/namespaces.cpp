// namespaces.cpp
#include "algotest.hpp"
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


namespace myspace
{
  void minka (int& , int& );
}

void myspace::minka (int& a, int& b)
{ int tmp;
  tmp = a;
  a = b;
  b = tmp;
}



int main ()
{/*
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
  int a =5;
  int b =8;
  myspace::minka(a,b);
  cout << a << endl;
  cout << b << endl;
  myspace::minka (a, b);
  cout << a << endl;
  cout << b << endl;
}

/*

g++ -std=c++11 namespaces.cpp -o  namespaces

*/
