#include <iostream>
#include <climits>
using namespace std;
int main() {
  short num1 = SHRT_MAX + 1,
	num2 = SHRT_MIN - 1;
  cout << "SHRT_MAX+1: " << num1 << endl;
  cout << "SHRT_MIN-1: " << num2 << endl;
  return 0;
}
