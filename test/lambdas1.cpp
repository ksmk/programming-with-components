// lambdas1.cpp
#include "algotest.hpp"
using namespace std;

struct Parts {
  Parts() = default;
  Parts(const string& d) : description(d) {}
  void print () const { cout << description << endl;}
  // ~Parts();
private:
  string description;
};

class Person {
private:
  string name;
  int age;
public:
  Person () = default;
  Person (const string& n) : name (n) { age = 0;}
  void print () const { cout << name << endl; }
  void print2 (const string& n) const { cout << n << age << ' ' << name << endl; }

};

int main ()
{
  auto plus10 = [] (int i) { return i +10; };
  cout << "i+10 " << plus10(7) << endl;


  vector <int> coll;
  /*
  for (int i =1; i <=9; ++i)
    cout << coll[i] <<' ';
  */
  cout << endl;
  for (int i =1; i <=9; ++i)
    coll.push_back(i);
  PRINT_ELEMS (coll, "coll:  ");

  long sum = 0;
  for_each (coll.begin(), coll.end(), [&sum](int elem) { sum+=elem; } );

  double mv = static_cast<double>(sum)/static_cast<double>(coll.size());
  cout << "mean value:  " << mv << endl;
//---------------------------------------------------------------------------------------
  vector<Person> prs = {Person("asdfads"), Person("ttra"), Person("TETDFd")};
  for_each (prs.begin(), prs.end(), [](const Person& p) {p.print();} );
  cout << endl;

  for_each (prs.begin(), prs.end(), [](const Person& p) {p.print2("Prs::::    ");});
  cout << endl;

  vector<Parts> prt = {Parts("3413x43"), Parts("33534sad"), Parts("3123413x43")};
  for_each (prt.begin(), prt.end(), [](const Parts& p) {p.print();} );

//---------------------------------------------------------------------------------------
  vector <int> sth {1,2,3,4,6,7,8};
  vector <int> :: iterator pos;
  int count = 0;
  pos = remove_if(sth.begin(), sth.end(), [&count](int) {return ++count ==3;} );
  PRINT_ELEMS(sth, "sth::   ");

//---------------------------------------------------------------------------------------

  //auto eq = [] (const Person& p1, Person& p2) { p1.age };


}






/*
g++ -std=c++11  lambdas1.cpp -o  lambdas1

*/
