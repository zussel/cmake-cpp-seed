#include "calc/calculator.hpp"

#include <iostream>
#include <stdexcept>

using namespace std;
using namespace calc;

int main (int, char *[])
{

  calculator calc;

  int res = calc.add(1, 5);

  res = calc.minus(7, res);

  res = calc.divide(20, res);

  try {
    res = calc.divide(20, 0);
  } catch(logic_error &) {
    // correct exception was caught
  }

  res = calc.multiply(5, res);

  calc.store(res);

  res = calc.restore();

  std::cout << "result: " << res << "\n";

  return 0;
}
