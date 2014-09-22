#include <iostream>
using namespace std;

void swap3(int &x, int &y);

int main() {
  int i = 2;
  int j = 3;
  swap3(i, j);
  cout << i << " " << j << endl;
  return 0;
}

void swap3(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}
