//patternCRTP.cpp
// Curiously Recuring template pattern
#include <iostream>

using namespace std;

template <class T> class AutoCount {
protected:
	static size_t _c;
public:
	AutoCount() { _c++; }
  AutoCount(AutoCount&) { _c++; }
  virtual ~AutoCount() { _c--; }
  static size_t count() { return _c; }
};

template <class T> size_t AutoCount<T>::_c = 0; // wtf
class MyClass1: public AutoCount <MyClass1> {}; // CRTP
class MyClass2: public AutoCount <MyClass2> {};

int main() {
  MyClass2 o2, o1;
	MyClass1 o3, o4, o11;
  cout << MyClass2::count() << endl;
  cout << MyClass1::count() << endl;
}

/*

g++ -std=c++11 patternCRTP.cpp -o patternCRTP

*/
