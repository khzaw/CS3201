#include <iostream>
#include <climits>
using namespace std;

int max(int i, int j, int k=INT_MIN);

int main() {
  cout << max(1, 2, 3) << endl;
  cout << max(1, 2) << endl;
  return 0;
}

int max(int i, int j, int k) {
  if(i > j && i > k)
    return i;
  else if(j > i && j > k)
    return j;
  else
    return k;
}
