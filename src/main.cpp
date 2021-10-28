#include <cstdlib>
#include <iostream>

// OBJETIVO
// Realizar calculo com entrada do usuário e as 4 operações
//
// REQUISITOS
// Interface simples e aconchegante
// Entrada de usuário para números e operadores
// Ordem de entrada, número, operador, número
// Grandes números decimais para mostrar o resultado
//
// BACKUP PELO GIT E MEU SSD
//
// PASSO A PASSO
// Calculadora
//  Apresentação explicativa
//  Entrada
//    Entrar o primeiro número
//    Entrar a operação necessária
//    Entrar o segundo número
//  Calcular o resultado
//  Imprimir o resultado
//  Mensagem de volte sempre
//
//  MARQUE NO MAIN A AS FUNÇÕES
//  IMPLEMENTE CADA FUNÇÃO
//  TESTE CADA FUNÇÃO

void greeter();
long double getUserInput();
char getMathematicalOperation();
long double calculateResult( long double x, char operation, long double y );
void printResult( long double result );
void thanks();

int main()
{
  greeter();
  long double x { getUserInput() };
  char operation { getMathematicalOperation() };
  long double y { getUserInput() };
  long double result { calculateResult( x, operation, y ) };
  printResult( result );
  thanks();
  return EXIT_SUCCESS;
}

void greeter()
{
  std::cout << "----------------------------------------------\n";
  std::cout << "|                  CALCULADORA               |\n";
  std::cout << "----------------------------------------------\n";
  std::cout << "| Operadores disponíveis -> + - * /          |\n";
  std::cout << "| Digite apenas um operador disponível       |\n";
  std::cout << "| Lembre-se números decimais com ponto       |\n";
  std::cout << "----------------------------------------------\n\n";
}

long double getUserInput()
{
  std::cout << "Digite um número : ";
  long double input;
  std::cin >> input;
  return input;
}

char getMathematicalOperation()
{
  std::cout << "Digite um operador válido : ";
  char input;
  std::cin >> input;
  return input;
}

long double calculateResult( long double x, char operation, long double y )
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

void printResult( long double result )
{
  std::cout << "\n----------------------------------------------\n";
  std::cout << " RESULTADO : " << result << '\n';
  std::cout << "----------------------------------------------\n";
}

void thanks()
{
  std::cout << "\n==============================================\n";
  std::cout << "||  OBRIGADO POR USAR A NOSSA CALCULADORA   ||\n";
  std::cout << "==============================================\n\n";
}
