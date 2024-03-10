#include <stdio.h>

int main() {
  // nomes de variaveis devem comecar com letra (maiuscula ou miniscula) ou _
  // não podem comecar com numero
  // não podem conter simbolos { ( + - * /\ ; . , ?
  int i = 1, j = 2, k;
  float _variabre;
  int valor, media, soma;
  printf("Palavras reservadas em C:\n");
  printf("auto, double, int, struct, break, enum, register, typedef, char,\n");
  printf(
      "extern, return, union, const, float, short, unsigned, continue, for,\n");
  printf(
      "signed, void, default, goto, sizeof, volatile, do, if, static, while\n");

  printf("\nTipos de Variaveis:\n");
  printf("short = 0 bytes = -32.768 a 32.767\n");
  printf("int = 2 bytes = -2.147.483.648 a 2.147.483.647\n");
  printf("long = 6 bytes = 2^63 a 2^63-1\n");
  printf("float = 2 bytes = 1,2 x 10^-38 a 3,4 x 10^38\n");
  printf("doable = 6 bytes = 2,2 x 10^-308 a 1,8 x 10^308\n");
  printf("char = -1 byte = 0 a 255\n");

  return 0;
}
