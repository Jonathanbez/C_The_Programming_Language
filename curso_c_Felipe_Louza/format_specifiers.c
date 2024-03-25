#include <stdio.h>

//Format Specifiers for tell the compiler about the type of data
//in operations of input and output

int main()
{
    int x = 10, y = 30;
    char c = 'X';
    double z = 2.2;
    printf("%d %d %c\n", x,y,c);
    // syntax follows the order of the specifier with the variables informed
    printf("%d %s %f = %d", x, "+", z, x+z);
    //return 0;
}