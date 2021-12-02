#include <cstdlib>
#include <exception>
#include <iostream>

#include "calculadora.hpp"

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

int main()
{
  Calculadora app {};

  try
  {
    app.run();
  }
  catch ( std::exception &e )
  {
    std::cerr << "EXCEPTION FOUND IN " << e.what() << '\n';
  }
  return EXIT_SUCCESS;
}
