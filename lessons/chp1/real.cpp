#include <iostream>
#include <cfloat>  // min and max of floating-point types
using namespace std;
int main() {
  cout << FLT_MIN << " " << FLT_MAX << endl;
  cout << DBL_MIN << " " << DBL_MAX << endl;
  cout << LDBL_MIN << " " << LDBL_MAX << endl;
  return 0;
}
