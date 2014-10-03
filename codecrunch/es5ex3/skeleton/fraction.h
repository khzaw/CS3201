#include <string>
using namespace std;

class Fraction {
  public:
    Fraction(int, int);
    Fraction();

    int getNumer();
    int getDenom();

    void setNumer(int);
    void setDenom(int);

    Fraction add(Fraction f);
    Fraction minus(Fraction f);
    Fraction times(Fraction f);
    Fraction divide(Fraction f);
    Fraction simplify();

    string str();

    bool equals(Fraction f);

  private:
    int numer, denom;

    int gcd(int a, int b);
};
