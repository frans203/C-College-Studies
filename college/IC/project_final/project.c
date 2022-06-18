/*
Sites uuteis para a documentacao e estudo o codigo:
https://www.blogcyberini.com/2017/09/algoritmo-equacao-terceiro-grau.html
https://www.indiastudychannel.com/resources/169911-Equation-Solving-using-C-Programming.aspx
https://www.geeksforgeeks.org/find-cubic-root-of-a-number/
http://sitegui.com.br/calc/
https://www.cprogressivo.net/2013/02/Como-criar-uma-calculadora-em-linguagem-C.html
https://pt.wikipedia.org/wiki/Nota%C3%A7%C3%A3o_polonesa_inversa
https://pt.stackoverflow.com/questions/6382/receber-uma-express%C3%A3o-e-calcular-em-c
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Funcao basica para adicao
double somar(double a, double b) { return a + b; }

// Funcao basica para subtracao
double subtrair(double a, double b) { return a - b; }

// Funcao basica de multiplicacao
double multiplicar(double a, double b) { return a * b; }

// Funcao basica de divisao
// a dividido por b
double dividir(double a, double b) { return a / b; }

// Funcao para elevar a ao expoente b
// a pode ser decimal
// b deve ser inteiro
double exponencial(double a, int b)
{
  double potencia = 1;

  if (a == 0)
    return potencia;

  if (b == 0)
    return potencia = 1;

  for (int i = 0; i < b; i++)
  {
    potencia *= a;
  }
  return potencia;
}

// Funcao que retorna a raiz quadrada de a
// O valor de a deve ser positivo.
double raizQuadrada(double a)
{
  if (a < 0)
  {
    printf("O valor do número deve ser um inteiro positivo.");
    return 0;
  }
  double raiz, temp;
  raiz = a / 2;
  temp = 0;
  // Itera o resultado ate que a raiz seja diferente da variavel temp, que eh
  // alterada a cada loop
  while (raiz != temp)
  {
    // Inicia com o valor 0 e eh atualizada com o valor de a
    temp = raiz;
    raiz = (a / temp + temp) / 2.0;
  }
  return raiz;
}

// Funcao que calcula o valor fatorial do numero a
// So aceita numeros inteiros e positivos
int fatorial(int a)
{
  // Condicao de existencia do fatorial
  if (a <= 0)
  {
    printf("O valor do número deve ser maoir que zero.");
    return 0;
  }

  double fatorial = a;

  for (int auxiliar = --a; auxiliar > 0; auxiliar--)
    fatorial *= auxiliar;

  return fatorial;
}

// Para realizar a equacao do segundo e terceiro grau, precisaremos de mais do que uma funcao //

// Esta funcao verifica a condicao de existencia das equacoes a partir do valor do coeficiente A
// O coeficiente A deve ser um inteiro
// Se o coeficiente for valido, retorna 1, se não, retorna 0
int coeficiente_a_valido(int coeficienteA)
{
  if (coeficienteA == 0)
  {
    printf("Coeficiente A não pode ser igual a zero!\n");
    return coeficienteA;
  }
  else
    return 1;
}

// Esta funcao eh responsavel por calcular o valor de delta
int delta(int coeficienteA, int coeficienteB, int coeficienteC)
{
  return (exponencial(coeficienteB, 2) - (4 * coeficienteA * coeficienteC));
}
// Esta funcao calcula as raizes de uma equacao quadratica no formato ax^2 + bx + c = 0
// As raizes ficarao armazenadas no vetor raizes[]
void equacaoQuadratica(int coeficienteA, int coeficienteB, int coeficienteC,
                       double raizes[], int erro)
{

  // Verifica o coeficiente A da equacao para poder prosseguir ou lancar uma mensagem de erro
  if (!coeficiente_a_valido(coeficienteA))
  {
    printf("coeficiente a invalido!\n");
    erro = 1;
  }
  else
  {
    // Calcula o valor de delta
    int deltaValor = delta(coeficienteA, coeficienteB, coeficienteC);

    // Caso delta seja maior que zero, teremos duas raizes reais distintas
    if (deltaValor > 0)
    {
      raizes[0] =
          (-coeficienteB + raizQuadrada(deltaValor)) / (2 * coeficienteA);
      raizes[1] =
          (-coeficienteB - raizQuadrada(deltaValor)) / (2 * coeficienteA);
      printf("Raiz 1 = %.2lf; Raiz 2 = %.2lf.\n", raizes[0], raizes[1]);
    }

    // Caso delta seja igual a zero, teremos dua raizes iguais
    else if (deltaValor == 0)
    {
      raizes[0] = raizes[1] = -coeficienteB / (2 * coeficienteA);
      printf("As duas raizes  valem %.2lf.\n", raizes[0]);
    }

    // Caso delta seja menor que zero, nao teremos raizes reais
    else if (deltaValor < 0)
    {
      printf("A equação não tem raizes reais.\n");
      erro = 1;
    }
  }
  return;
}

// Funcao que reduz uma equacao do terceiro grau para uma equacao do segundo a partir dos coeficientes da equcao do terceiro gra
// Ela utiliza o metodo de Briot-Ruffini e retorna os coeficientes da equacao do segundo grau
void briotRuffini(double raiz, int coeficienteA, int coeficienteB,
                  int coeficienteC, int coeficienteD, int novoCoeficienteA,
                  int novoCoeficienteB, int novoCoeficienteC)
{
  novoCoeficienteA = coeficienteA;
  novoCoeficienteB = novoCoeficienteA * raiz + coeficienteB;
  novoCoeficienteC = novoCoeficienteB * raiz + coeficienteC;
  int resto = novoCoeficienteC * raiz + coeficienteD;
}

// Esta funcao sera utilizada para resolver a raiz cubica
double diferenca(double a, double auxiliar)
{
  if (a > (auxiliar * auxiliar * auxiliar))
    return (a - (auxiliar * auxiliar * auxiliar));
  else
    return ((auxiliar * auxiliar * auxiliar) - a);
}

// Esta função calcula a raiz cúbica de um decimal a
// De longe, um dos maiores desafios neste projeto foi descobrir o algoritmo para calcular a raiz cúbica, 
// juntamente com a função para calcular a equação cúbica
double raizCubica(double a)
{

  // Se o numero for negativo, o valor de a ficara positivo para o algoritimo
  // funcionar e no final, tornamos negativo de novo
  int sinal = 0;
  if (a < 0)
  {
    a = -a;
    sinal = 1;
  }
  // Valores inicial e final para calcular a raiz
  double inicio = 0, fim = a;

  // Precisao da raiz pode ser alterada a partir do valor de e
  double e = 0.00000001;

  while (1)
  {
    double auxiliar = (inicio + fim) / 2;
    double erro = diferenca(a, auxiliar);

    // Se o erro for menor que 'e', entao o auxiliar eh nossa resposta que sera o retorno da funcao
    if (erro <= e)
    {
      if (sinal)
      {
        auxiliar = -auxiliar;
        return auxiliar;
      }
      return auxiliar;
    }
    // Se auxiliar*auxiliar*auxiliar eh maior que a, fim = auxiliar
    if ((auxiliar * auxiliar * auxiliar) > a)
      fim = auxiliar;

    // Se auxiliar*auxiliar*auxiliar eh menor que a, inicio = auxiliar
    else
      inicio = auxiliar;
  }
}
// Nao conseguimos implementar
void equacaoCubica();

// Para manipular o historico teremos duas funcoes, uma para adicionar o esultado e outra para printar na tela
// Aqui definimos o tamanho da matriz que sera o nosso historico
#define LINHAS 10
// A quantidade de colunas é referente ao número de parametros exibidos pelo histórico
#define COLUNAS 4
 
// O historico vai armazenar apenas 10 cálculos, depois será apagado
int historico(int contador, double numeros[], char operador, double resultado[],
              double matrizHistorico[LINHAS][COLUNAS])
{
  ++contador;
  if (contador > LINHAS)
  {
    double matrizNova[LINHAS][COLUNAS];
    for (int i = LINHAS; i > 0; i--)
    {
      matrizHistorico[i][0] = matrizHistorico[i - 1][0];
      matrizHistorico[i][1] = matrizHistorico[i - 1][1];
      matrizHistorico[i][2] = matrizHistorico[i - 1][2];
      matrizHistorico[i][3] = matrizHistorico[i - 1][3];
    }
    contador = 1;
  }
  int i = contador;
  --i;
  double parserOperador = operador;
  matrizHistorico[i][0] = numeros[0];
  matrizHistorico[i][1] = parserOperador;
  matrizHistorico[i][2] = numeros[1];
  matrizHistorico[i][3] = resultado[0];
  return contador;
}
// Essa funcao eh responsavel por printar o historico
void imprimirHistorico(int contador, double matriz[LINHAS][4])
{
  int i = 0;
  do
  {
    printf("Expressão %d: %.4lf %c %.4lf = %.4lf;\n", i, matriz[i][0],
           (int)matriz[i][1], matriz[i][2], matriz[i][3]);
    i++;
  } while (i < contador);
  return;
};

// Aqui na funcao main esta todo o codigo do menu da aplicacao e uma apresentacao do grupo
int main(int argc, char const *argv[])
{
  double matrizHistorico[LINHAS][COLUNAS];
// Caractere que armazena a operaçcao que deve ser executada
 char operador;
 double result;
 double resultado[1];
 double parametros[2];
 double parametro[1];
 double coeficientes[3];
// Contador que eh usado para verificar quanta operacoes ja foram executas
 int contador = 0;
 double a, b = 0;

  printf("*********************************************************************"
         "********\n");
  sleep(1);
  printf("**********                                                         "
         "**********\n");
  sleep(1);
  printf("********** Projeto Final de Introducao ao Computador - Calculadora "
         "**********\n");
  sleep(1);
  printf("**********                                                         "
         "**********\n");
  sleep(1);
  printf("**********                        Grupo                            "
         "**********\n");
  sleep(1);
  printf("**********                                                         "
         "**********\n");
  sleep(1);
  printf(
      "**********      1-Ana Clara                 2-Ana Darc             **********\n");
  sleep(1);
  printf(
      "**********      3-Ana Laura                 4-Arthur Ramon         **********\n");
  sleep(1);
  printf("**********      5-Davi Baratto              6-Francisco Santana    "
         "**********\n");
  sleep(1);
  printf("**********      7-Moises Santos                                    "
         "**********\n");
  sleep(1);
  printf("**********                                                         "
         "**********\n");
  sleep(1);
  printf("*********************************************************************"
         "********\n");

  sleep(10);
  system("clear || cls");

  while (1)
  {
  menu:

    printf("\nPara ver o historico da calculadora, digite \"0 h 0\""
           "\nEscolha qual operação deseja efetuar:\n"
           "\tsoma               -> +\n\tsubtração          -> "
           "-\n\tmultiplicação      -> *\n\tdivisão            -> "
           "/\n\texponenciação      -> ^\n\traiz quadrática    -> "
           "r\n\traiz cúbica        -> c\n\tfatorial           -> !\n\tequação "
           "quadrática -> 0 2 0\n\tsair               -> 0 0 0\n\nDigite a "
           "expressão na forma: numero1 operador numero2\n"
           "Exemplos: 3.5 + 16, 3 * 4, 5 / 8\n"
           "Caso a expressāo só receba um valor, digite: numero1 operador 0\n"
           "Exemplos: 4 ! 0, 9 r 0, 64 c 0\n");

    scanf("%lf %c %lf", &a, &operador, &b);

    switch (operador)
    {
    case '+':
    {
      resultado[0] = somar(a, b);
      printf("%.4lf\n", resultado[0]);
      parametros[0] = a;
      parametros[1] = b;
      contador =
          historico(contador, parametros, operador, resultado, matrizHistorico);
      break;
    }
    case '-':
    {
      resultado[0] = subtrair(a, b);
      printf("%.4lf\n", resultado[0]);
      parametros[0] = a;
      parametros[1] = b;
      contador =
          historico(contador, parametros, operador, resultado, matrizHistorico);
      break;
    }
    case '*':
    {
      resultado[0] = multiplicar(a, b);
      printf("%.4f\n", resultado[0]);
      parametros[0] = a;
      parametros[1] = b;
      contador =
          historico(contador, parametros, operador, resultado, matrizHistorico);
      break;
    }
    case '/':
    {
      // Se o valor do segundo numero for igual a zero, o codigo retornara um aviso de erro
      if (b == 0)
      {
        printf("Divisão por zero não é possível!\n");
      }
      else
      {
        resultado[0] = dividir(a, b);
        printf("%.4lf\n", resultado[0]);
        parametros[0] = a;
        parametros[1] = b;
        contador = historico(contador, parametros, operador, resultado,
                             matrizHistorico);
      }
      break;
    }
    case '^':
    {
      int expoente = b;
      resultado[0] = exponencial(a, expoente);
      printf("%.4lf\n", resultado[0]);
      parametros[0] = a;
      parametros[1] = b;
      contador =
          historico(contador, parametros, operador, resultado, matrizHistorico);
      break;
    }
    case 'r':
    {
      resultado[0] = raizQuadrada(a);
      printf("%.4lf\n", resultado[0]);
      parametro[0] = a;
      contador =
          historico(contador, parametro, operador, resultado, matrizHistorico);
      break;
    }
    case 'c':
    {
      resultado[0] = raizCubica(a);
      printf("%.4lf\n", resultado[0]);
      parametro[0];
      contador =
          historico(contador, parametro, operador, resultado, matrizHistorico);
      break;
    }
    case '!':
    {
      int fator = a;
      resultado[0] = fatorial(fator);
      printf("%d\n", (int)resultado[0]);
      parametro[0] = a;
      contador =
          historico(contador, parametro, operador, resultado, matrizHistorico);
      break;
    }
    case '2':
    {
      int A, B, C, erro = 0;
      double raizes[2];
      printf("Digite os valores dos coeficientes A B e C: \n");
      scanf("%d %d %d", &A, &B, &C);
      equacaoQuadratica(A, B, C, raizes, erro);
      coeficientes[0] = A;
      coeficientes[1] = B;
      coeficientes[2] = C;
      break;
    }
    case 'h':
    {
      system("clear || cls");
      if (contador == 0)
      {
        printf("Histórico vazio.\n");
        break;
      }
      imprimirHistorico(contador, matrizHistorico);
      printf("Digite algo para sair:");
      scanf(" %c", &operador);
      break;
    }
    case '0':
    {
      system("clear || cls");
      printf("Saindo...\n");
      sleep(2);
      return 0;
    }
    default:
    {
      system("clear || cls");
      printf("Operador escolhido não foi definido, por favor tente outro ou "
             "selecione \"e\" para sair.\n");
      sleep(5);
      system("clear || cls");
      goto menu;
    }
    }
    sleep(2);
    system("clear || cls");
  }
}