#include <stdio.h>

void lgc_op();

int main()
{
    int x = 10;
    int y = 2;

    printf("%d\n", x == y + 8);
    lgc_op(); 
    return 0;
    
}
// output: 0 false / 1 true

void lgc_op()
{
    // Logical Operators in C
    printf("&& Conjunction AND\n");
    printf("X | Y = X && Y\n");
    printf("1 | 1 =   1   \n");
    printf("1 | 0 =   0   \n");
    printf("0 | 1 =   0   \n");
    printf("0 | 0 =   0   \n");
}