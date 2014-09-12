// box.cpp
// To compute the number of boxes with length, width and height
// in the range [lower,upper] whose surface area is larger than
// volume.
#include <iostream>
using namespace std;

int total_surface_area(int, int, int); // Fill in necessary parameterts
int volume(int, int, int);
int countHowManyInRange(int, int);

int main() {
  int lower, upper;

  cout << "Enter lower and upper limits: ";
  cin >> lower;
  cin >> upper;
  cout << "Answer = " << countHowManyInRange(lower, upper);

  return 0;
}

// Return the surface area and volume of a box with dimension a, b, c
// Fill in necessary pamameters
int total_surface_area(int length, int width, int height) {
  return 2 * (length*width + length*height + width*height);
}

int volume(int length, int width, int height) {
  return length * width * height;
}

int countHowManyInRange(int lower, int higher) {
  int count = 0;
  for(int i = lower; i <= higher; i++) {
    for(int j = i; j <= higher; j++) {
      for(int k = j; k <= higher; k++) {
        if(total_surface_area(i, j, k) >= volume(i, j, k)) {
        count++;
        }
      }
    }
  }
  return count;
}
