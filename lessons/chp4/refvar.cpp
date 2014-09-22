#include <iostream>
using namespace std;

void f(int &x) { x++; }     // reference param
void g(int x) { x++; }     // pass by val
void h(int *x) { (*x)++; } // pointer param

int main() {
  int x = 0, y = 0;
  int &z = x;   // z, x are regarded as the same var

  f(x); cout << z << endl;
  g(x); cout << z << endl;
  h(&x); cout << z << endl;

  z = y;
  f(z); cout << x << endl;
  g(z); cout << x << endl;
  h(&z); cout << x << endl;

  cout << y << endl;

  return 0;
}
