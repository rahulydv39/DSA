#include <iostream>
using namespace std;

int main() {
  int a = 123;
  cout << a << endl;

  char b = 'v';
  cout << b << endl;

  bool bl = true;
  cout << bl << endl;

  float f = 1.09;
  cout << f << endl;

  double d = 1.234;
  cout << d << endl;

  int size = sizeof(d);
  cout << "Size of d :" << size << endl;

  int x = 2;
  int y = 3;

  bool first = (x == y);
  cout << first << endl;

  bool second = (x != y);
  cout << second << endl;
}
