#include <iostream>
#include <string>
using namespace std;

// Fill in the function prototype for maxTemp()
// Write one single function with templates, not mutiple overloading functions
template <typename T>
T maxTemp(T a, T b) {
  return a > b ? a : b;
}

int main(){
    int type;
  cout << "Enter type (1 for int, 2 for double, 3 for string): ";
  cin >> type;
  
  switch (type){
    case 1:
      int input1Int, input2Int;
      cout << "Enter two integers separated by a space: ";
      cin >> input1Int >> input2Int;
      
      cout << "max = " << maxTemp(input1Int, input2Int) << endl;
      break;
    
    case 2:
      double input1Double, input2Double;
      cout << "Enter two real numbers separated by a space: ";
      cin >> input1Double >> input2Double;
      
      cout << "max = " << maxTemp(input1Double, input2Double) << endl;
      break;
    
    case 3:
      string input1String, input2String;
      cout << "Enter two strings separated by a space: ";
      cin >> input1String >> input2String;
      
      cout << "max = " << maxTemp(input1String, input2String) << endl;
      break;
  }

   return 0;
}

// Fill in the function implementation for maxTemp()
// Write one single function with templates, not mutiple overloading functions
