// set.cpp
// Program to check if a set is contained in another.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSubset(vector<int>, vector<int>);
bool equals(vector<int>, vector<int>);

int main(void) {
  int na, nb;
  vector<int> vectorA, vectorB;
  cout << "Enter number of elements in setA: ";
  cin >> na; 

  cout << "Enter elements for setA: ";
  for(int i = 0; i < na; ++i) {
    int j;
    cin >> j;
    vectorA.push_back(j);
  }
  

  cout << "Enter number of elements in setB: ";
  cin >> nb;

  cout << "Enter elements for setB: ";
  for(int i = 0; i < nb; ++i) {
    int j;
    cin >> j;
    vectorB.push_back(j);
  }

  sort(vectorA.begin(), vectorA.end());
  sort(vectorB.begin(), vectorB.end());

  if(isSubset(vectorA, vectorB)) {
    cout << "setA is a subset of setB." << endl;
  } else {
    cout << "setA is not a subset of setB." << endl;
  }
  if(equals(vectorA, vectorB)) {
    cout << "setA is equal to setB." << endl;
  } else {
    cout << "setA is not equal to setB." << endl;
  }
}

// Return true if setA is a subset of setB,
// otherwise return false.
bool isSubset(vector<int> setA, vector<int> setB) {
  if(includes(setB.begin(), setB.end(), setA.begin(), setA.end())) {
    return true;
  }
  return false;
}

// Return true if setA is equal to setB,
// otherwise return false.
bool equals(vector<int> setA, vector<int> setB){
  return setA == setB;
}
