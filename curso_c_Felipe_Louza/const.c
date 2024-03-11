#include <stdio.h>
#define PI 3.1416
#define hello "Hello Word!\n"

// podemos definir variaveis constantes com #define
// 

int main() {
  double x = PI;

  printf("Pi =%f\n", x);
  const char c = 'a';
  const int b;
  printf("%c\n", c);
  printf("%d\n", b);
  int a;
  printf("%d\n", a);
  printf(hello);
}
