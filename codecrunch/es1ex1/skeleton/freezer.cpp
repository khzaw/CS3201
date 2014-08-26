/*
 *  freezer.cpp
 *  Estimate temperature in a freezer
 *  given the elapsed time since power failure.
 *  Formula: T = (4*t^10 / (t^9+2)) - 20
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculateT(int hour, int min);
double convertToHours(int hour, int min);
int main(void) {
  int hour, min;
  cout << "Enter hours and minutes since power failure: ";
  cin >> hour >> min;
  cout << "Temperature in freezer = " << fixed << setprecision(2) << calculateT(hour, min) << endl;
  return 0;
}

double calculateT(int hour, int min) {
  double hours = convertToHours(hour, min);
  double result = 4.0*pow(hours, 10.0);
  result = result / (pow(hours, 9.0) + 2.0);
  result -= 20.0;
  return result;
}

double convertToHours(int hour, int min) {
  return hour + (min/60.0);
}

