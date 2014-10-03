// To test out Fraction class
#include <iostream>
#include "zerodenominatorexception.h"
#include "divisionbyzeroexception.h"
#include "fraction.h"
using namespace std;

int main() {
  try {
  int denom, numer;
  Fraction f1, f2;

  cout << "Enter 1st fraction: ";
  cin >> numer  >> denom;


  f1.setNumer(numer);
  f1.setDenom(denom);

  cout << "Enter 2nd fraction: ";
  cin >> numer >> denom;
  
  f2.setNumer(numer);
  f2.setDenom(denom);
  
  cout << "1st fraction is " << f1.str() << endl;
  cout << "2nd fraction is " << f2.str() << endl;

  if (f1.equals(f2)) 
    cout << "The fractions are the same." << endl;
  else
    cout << "The fractions are not the same." << endl;

  Fraction sum = f1.add(f2);
  cout << "Sum is " << sum.str() << endl;

  Fraction diff = f1.minus(f2);
  cout << "Difference is " << diff.str() << endl;

  Fraction prod = f1.times(f2);
  cout << "Product is " << prod.str() << endl;

  Fraction quot = f1.divide(f2);
  cout << "Quotient is " << quot.str() << endl;

  return 0;
  } catch(ZeroDenominatorException e) {
    cout << e.what() << endl;
  } catch (DivisionByZeroException e) {
    cout << e.what() << endl;
  }
} 

