#include <stdio.h>

int main ()
{
    int x, y, z;

    x = 2;
    y = 3;
    z = 4;
    int n_p_m = 0;
    int p_m = 0;
    //Em C operadores matematicos seguem a mesma regra da Algebra

    n_p_m = x + y * z;
    printf("Result of first equation (no multiplication precedence) %d", n_p_m);
    p_m = (x + y) * z;
    printf("Result of secundo equation (on multiplication precedence) %d", p_m);
}