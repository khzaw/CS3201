#include <string>
using namespace std;

class Fraction {
  public:
    Fraction(int, int);

    int getNumer();
    int getDenom();

    void setNumer(int);
    void setDenom(int);

    Fraction add(Fraction f);         // returns this + f
    Fraction minus(Fraction f);       // returns this - f
    Fraction times(Fraction f);       // returns this * f
    Fraction simplify();              // simplifies this

    string str();                     // returns a string in the form "numerator/denomiator"

    bool equals(Fraction f);          // returns true if the two fractions are equal to each other, false otherwise

  private:
  // private attributes
    int numer, denom;

    // private static function
    int gcd(int a, int b);
};
