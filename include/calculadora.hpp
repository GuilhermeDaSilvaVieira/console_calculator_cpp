#ifndef CALCULADORA_HPP_01_12_2021
#define CALCULADORA_HPP_01_12_2021

class Calculadora
{
private:
  long double x;
  long double y;
  char operation;

  void greeter();
  long double getUserInput();
  bool validOperator( char operation );
  char getMathematicalOperation();
  long double calculateResult( long double x, char operation, long double y );
  void printResult( long double result );
  void thanks();

public:
  Calculadora() = default;
  void run();
};
#endif
