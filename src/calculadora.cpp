#include "calculadora.hpp"

#include <iomanip>
#include <iostream>
#include <limits>

void Calculadora::run()
{
  std::cout << std::setprecision( 32 );
  greeter();
  x         = getUserInput();
  operation = getMathematicalOperation();
  y         = getUserInput();
  printResult( calculateResult( x, operation, y ) );
  thanks();
}

void Calculadora::greeter()
{
  std::cout << "----------------------------------------------\n"
            << "|                  CALCULADORA               |\n"
            << "----------------------------------------------\n"
            << "| Operadores disponíveis -> + - * /          |\n"
            << "| Digite apenas um operador disponível       |\n"
            << "| Lembre-se números decimais com ponto       |\n"
            << "----------------------------------------------\n\n";
}

long double Calculadora::getUserInput()
{
  long double input;
  // executes loop if the input fails (e.g., no characters were read)
  while ( std::cout << "Digite um número : " && !( std::cin >> input ) )
  {
    std::cin.clear();                                                       // clear bad input flag
    std::cin.ignore( std::numeric_limits< std::streamsize >::max(), '\n' ); // discard input
    std::cout << "Entrada inválida. Por favor digite de novo.\n";
  }
  return input;
}

bool Calculadora::validOperator( char operation )
{
  switch ( operation )
  {
  case '+' :
    return true;
  case '-' :
    return true;
  case '*' :
    return true;
  case '/' :
    return true;
  default :
    return false;
  }
}

char Calculadora::getMathematicalOperation()
{
  char input;
  // executes loop if the input fails (e.g., no characters were read)
  while ( std::cout << "Digite um operador válido : " && ( !( std::cin >> input ) || !validOperator( input ) ) )
  {
    std::cin.clear();                                                       // clear bad input flag
    std::cin.ignore( std::numeric_limits< std::streamsize >::max(), '\n' ); // discard input
    std::cout << "Entrada inválida. Por favor digite de novo.\n";
    // greeter();
  }
  std::cin.clear();                                                       // clear bad input flag
  std::cin.ignore( std::numeric_limits< std::streamsize >::max(), '\n' ); // discard input
  return input;
}

long double Calculadora::calculateResult( long double x, char operation, long double y )
{
  long double result {};

  switch ( operation )
  {
  case '+' :
    result = x + y;
    break;
  case '-' :
    result = x - y;
    break;
  case '*' :
    result = x * y;
    break;
  case '/' :
    result = x / y;
    break;
  default :
    std::cout << "Operador inválido!\n";
    break;
  }

  return result;
}

void Calculadora::printResult( long double result )
{
  std::cout << "\n----------------------------------------------\n" << x << " " << operation << " " << y << " = " << result << '\n' << "----------------------------------------------\n";
}

void Calculadora::thanks()
{
  std::cout << "\n==============================================\n"
            << "||  OBRIGADO POR USAR A NOSSA CALCULADORA   ||\n"
            << "==============================================\n\n";
}
