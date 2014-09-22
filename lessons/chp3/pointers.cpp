#include <iostream>
using namespace std;

int main() {
  int a;
  char c;
  int *ptr;
  a = 5;
  c = 't';
  ptr = &a;
  *ptr = 70;
  cout << *ptr << endl;
  cout << ptr[0] << endl;
  cout << ptr << endl;

  int i = 2;
  int *pi;
  pi = &i;

  *pi = 3;
  cout << pi[0] << endl;
  cout << pi[1] << endl;
}
