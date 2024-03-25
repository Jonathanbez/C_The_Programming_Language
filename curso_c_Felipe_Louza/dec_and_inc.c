#include <stdio.h>
//INCREMENT AND DECREMENT IN C
// a = a + 1 | a++ | ++a
// a++ is first used in the expression, and then incremented
// ++a the value is incremented, and then used in the expression

int main()
{
    int a=0, b=0, x, y;
    ++a;
    printf("Value of a is: %d\n", a);
    x = (b++) * 2;
    y = (++b) * 2;
    printf("x = (b++) * 2\nx = %d\n", x);
    printf("y = (++b) * 2\ny = %d", y);
    printf("\n\nAnother abreviations:\n");
    printf("a++  a = a + 1\n");
    printf("++a  a = a + 1\n");
    printf("a--  a = a - 1\n");
    printf("--a  a = a - 1\n\n");
    printf("a += b  a = a + b\n");
    printf("a -= b  a = a - b\n");
    printf("a *= b  a = a * b\n");
    printf("a /= b  a = a / b\n");
    printf("a %% = b  a = a %% b\n");
}