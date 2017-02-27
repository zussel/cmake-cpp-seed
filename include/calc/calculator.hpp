#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

#ifdef _MSC_VER
#ifdef calc_EXPORTS
    #define CALC_API __declspec(dllexport)
    #define EXPIMP_UTILS_TEMPLATE
  #else
    #define CALC_API __declspec(dllimport)
    #define EXPIMP_UTILS_TEMPLATE extern
  #endif
  #pragma warning(disable: 4251)
#else
#define CALC_API
#endif

namespace calc {

class CALC_API calculator
{
public:
  calculator();
  ~calculator();

  int add(int a, int b);
  int minus(int a, int b);

  int divide(int a, int divisor);
  int multiply(int a, int b);

  void store(int value);
  int restore();

private:
  int store_;
};

}

#endif /* CALCULATOR_HPP */
