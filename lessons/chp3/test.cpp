#include <iostream>
using namespace std;

int main() {
  // int a = 7, *ptr = &a;
  // cout << a << " " << *ptr;

  // int a = 7, b = 4, *ptr = &a;
  // ptr = &b;
  // cout <<  a << " " << b << " " << *ptr;

  // int a = 7, b = 4, *ptr = &a;
  // *ptr = b;
  // cout << a << " " << b << " " << *ptr;

  int a = 7, b = 4, *ptr1 = &a, *ptr2 = &b;
  ptr1 = ptr2;
  // cout << a << " " << b << " " << *ptr1 << " " << *ptr2;

  char t1 [10];
  char *pc1 = t1;

  char t2 [10];

  pc1 = t1 + 5;
  pc1[1] = 6;
  cout << t1[5] << endl;
  // *t1 = *(t1 + 5);

}
