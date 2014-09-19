// To test out Fraction class
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
  int numer, denom;

  cout << "Enter 1st fraction: ";
  cin >> numer >> denom;

  Fraction f1(numer, denom);

  cout << "Enter 2nd fraction: ";
  cin >> numer >> denom;
  Fraction f2(numer, denom);

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
  return 0;
}

