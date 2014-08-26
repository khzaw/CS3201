#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> myvector;
  int n, input;

  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> input;
    myvector.push_back(input);
  }

   for(int i = 0; i < myvector.size(); i++) {
     if(myvector.at(i) % 2 == 1)
	cout << " " << myvector.at(i);
   }
  return 0;
}
