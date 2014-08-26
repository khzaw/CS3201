#include <iostream>
using namespace std;
int main() {
  bool f = false;
  cout << f << " " << true << endl;
  cout << (0==1) << " " << (0!=1) << endl;
  cout << (bool) -1 << " " << (bool) 2 << endl;
  cout << (bool) (1.0) << endl;
  return 0;
}
