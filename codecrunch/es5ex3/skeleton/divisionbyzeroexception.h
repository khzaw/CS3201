#include <stdlib.h>

class DivisionByZeroException {
  public:
    DivisionByZeroException() : message ("Division by zero error!") {};
    const char * what () const { return message; }
    const char * message;
};
