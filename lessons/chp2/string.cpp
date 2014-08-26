#include <iostream>
#include <string>

using namespace std;
int main() {
  string s = "Hello world";
  s += '.';
  for(int i = 0; i < s.length(); i++)
    cout << s[i] << '_';
  cout << endl;

  cout << s.compare("Hello world!") << endl;
  cout << s.compare("Hello world.") << endl;
  cout << s.compare("Hello world?") << endl;
  system("pause");
  return 0;
}
