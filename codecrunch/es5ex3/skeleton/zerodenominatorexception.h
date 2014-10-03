#include <stdlib.h>

class ZeroDenominatorException {
  public:
    ZeroDenominatorException() : message ("Zero denominator error!") {};
    const char * what () const { return message; }
    const char * message;
};

