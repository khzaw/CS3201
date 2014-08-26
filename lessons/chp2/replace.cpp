#include <iostream>
#include <string>

using namespace std;
string replace(string str, string st1, string str2);


int main() {
  string str, str1, str2;
  cout << replace("AAAA", "AAA", "BBB") << endl;
  return 0;
}

string replace(string str, string str1, string str2) {
  int index = str.find(str1);
  return str.replace(index, str1.length(), str2);
}

