// Fraction class, using two int variables as the data members
#include <string>
#include <stdlib.h>
#include <sstream>
#include "fraction.h"
#include "zerodenominatorexception.h"
#include "divisionbyzeroexception.h"
using namespace std;


Fraction::Fraction(int n, int d) {
  if(d == 0) throw ZeroDenominatorException();
  numer = n;
  denom = d;
}

Fraction::Fraction() : numer(0), denom(1) {}

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
  if(d == 0) throw ZeroDenominatorException();
  denom = d;
}

Fraction Fraction::add(Fraction f) {
  Fraction f1(numer * f.denom, denom * f.denom);
  Fraction f2(f.numer * denom, f.denom * denom);
  Fraction result(f1.numer + f2.numer, f1.denom);
  return result.simplify();
}

Fraction Fraction::minus(Fraction f) {
  Fraction f1(numer * f.denom, denom * f.denom);
  Fraction f2(f.numer * denom, f.denom * denom);
  Fraction result(f1.numer - f2.numer, f1.denom);
  return result.simplify();
}

Fraction Fraction::times(Fraction f) {
  Fraction result(numer * f.numer, denom * f.denom);
  return result.simplify();
}

Fraction Fraction::divide(Fraction f) {
  if(f.numer == 0) throw DivisionByZeroException();
  Fraction result(numer * f.denom, denom * f.numer);
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
  return b == 0 ? a : gcd(b, a % b);
}
