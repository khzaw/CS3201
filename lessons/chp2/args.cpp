#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int ac, char *args[]) {
  cout << args[0] << endl;
  for(int i = 1; i < ac; ++i) {
    int n = atoi(args[i]);  // converts a string to an integer
    cout << args[i] << '\t' << strlen(args[i]) << '\t' << n+1 << endl;
  }
  return 0;
}
