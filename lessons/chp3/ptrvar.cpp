#include <iostream>
using namespace std;
int main() {
  int *p;
  int x = 12345;
  int y;

  p = &x;
  cout << &p << '\t' << p << '\t' << *p << endl;

  p = &y;
  cout << &p << '\t' << p << '\t' << *p << '\t' << y << endl;

  y = 67890;
  cout << &p << '\t' << p << '\t' << *p << endl;

  *p = 70;

  return 0;
}
