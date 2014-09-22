#include <iostream>
using namespace std;

int main() {
  int *p, sum = 0;
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for(p = a; p != a + 10; p++)
      sum += *p;

  cout << sum << endl;
  return 0;
}
