// date.cpp
// Program to read a string in the UK date format and 
// output the equivalent American format, and 
// also whether the year is a leap year

// Convert December 25, 2012 to 25 December 2012

#include <iostream>
using namespace std;

bool isLeapYear(int);

int main(void) {
  int day, year;
  string month, comma;

  cout << "Enter date in UK format: ";
  cin >> month >> day >> comma >> year;
  cout << "Date in American format: " << day << " " << month << " " << year << endl;
  if(isLeapYear(year)) {
    cout << year << " is a leap year." << endl;
  } else {
    cout << year << " is not a leap year." << endl;
  }
}

bool isLeapYear(int year){
  if(year % 400 == 0) {
    return true;
  } else if((year % 4 == 0) && (year % 100 != 0)) {
    return true;
  }
  return false;
}
