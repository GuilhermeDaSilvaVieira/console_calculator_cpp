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
  std::cout << "----------------------------------------------\n";
  std::cout << "|                  CALCULADORA               |\n";
  std::cout << "----------------------------------------------\n";
  std::cout << "| Operadores disponíveis -> + - * /          |\n";
  std::cout << "| Digite apenas um operador disponível       |\n";
  std::cout << "| Lembre-se números decimais com ponto       |\n";
  std::cout << "----------------------------------------------\n\n";
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
    greeter();
  }
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
  std::cout << "\n----------------------------------------------\n";
  std::cout << " RESULTADO : " << result << '\n';
  std::cout << "----------------------------------------------\n";
}

void Calculadora::thanks()
{
  std::cout << "\n==============================================\n";
  std::cout << "||  OBRIGADO POR USAR A NOSSA CALCULADORA   ||\n";
  std::cout << "==============================================\n\n";
}
