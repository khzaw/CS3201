// Fraction class, using two int variables as the data members

#include <string>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int n, int d) {
  numer = n;
  denom = d;
}

int Fraction::getNumer() {
  return numer;
}

int Fraction::getDenom() {
  return denom;
}

void Fraction::setNumer(int n) {
  numer = n;
}

void Fraction::setDenom(int d) {
  denom = d;
}

Fraction Fraction::add(Fraction f) {
  Fraction f1(numer * f.denom, denom * f.denom);
  Fraction f2(f.numer * denom , f.denom * denom);
  Fraction result(f1.numer + f2.numer, f1.denom);
  return result.simplify();
}

Fraction Fraction::minus(Fraction f) {
  Fraction f1(numer * f.denom, denom * f.denom);
  Fraction f2(f.numer * denom , f.denom * denom);
  Fraction result(f1.numer - f2.numer, f1.denom);
  return result.simplify();
}

Fraction Fraction::times(Fraction f) {
  Fraction result(numer * f.numer, denom * f.denom);
  return result.simplify();
}

Fraction Fraction::simplify() {
  int greatest_common_divisor = gcd(abs(numer), abs(denom));
  return Fraction(numer/greatest_common_divisor, denom/greatest_common_divisor);
}

bool Fraction::equals(Fraction f) {
  Fraction f1 = simplify();
  Fraction f2 = f.simplify();
  return (f1.numer == f2.numer) && (f1.denom == f2.denom);
}

string Fraction::str() {
  stringstream ss;
  ss << numer << "/" << denom;
  return ss.str();
}

int Fraction::gcd(int a, int b) {
  if(b == 0)  return a;
  else return gcd(b, a % b);
}
