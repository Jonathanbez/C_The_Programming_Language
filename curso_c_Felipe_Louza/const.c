#include <stdio.h>
#define PI 3.1416
#define hello "Hello Word!\n"

// podemos definir variaveis constantes com #define
// variaveis const iniciam com 0
// define tambem armazena string
// o codigo nao compila se tentar trocar o valor de const

int main() {
  double x = PI;
  char name[] = "Jonathan Bezerra Barros";


  printf("Pi =%f\n", x);
  const char c = 'a';
  const int b;
  printf("%c\n", c);
  printf("%d\n", b);
  int a;
  printf("%d\n", a);
  printf(hello);
  printf("%s\n", name);
}

