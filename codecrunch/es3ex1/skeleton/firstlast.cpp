// firstlast.cpp
// To find the first and last occurrences of an integer
// in a list of integers
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int n;
  string f, numbers;

  cout << "Enter the integer to be found: ";
  cin >> f;
  
  cout << "Enter number of integers in the list: ";
  cin >> n;

  cout << "Enter integers: ";

  for(int i = 0; i < n; i++) {
    string x;
    cin >> x;
    numbers += x;
  }

  size_t found = numbers.find(f);
  if(found != string::npos)
    cout << "First occurrence: " << found << "\n";
  else
    cout << "First occurrence: -1\n";

  found = numbers.rfind(f);
  if(found != string::npos)
    cout << "Last occurrence: " << found << "\n";
  else
    cout << "Last occurrence: -1\n";
  return 0;
}
