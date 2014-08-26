// prime.cpp
// To check if a number is prime.
#include <iostream>
using namespace std;
bool isPrime(int i);

int main(void) {    
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  if(isPrime(n)) {
    cout << n << " is a prime." << endl;
  } else {
    cout << n << " is not a prime." << endl;
  }
  return 0;
}

bool isPrime(int i) {
  if(i == 1) return false;
  for(int j = 2; j < i; ++j) {
    if(i % j == 0)
      return false;
  }
  return true;
}
