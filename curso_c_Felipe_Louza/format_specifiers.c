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
    printf("%d %s %f %f\n", x, "+", z, x+z);
    float pi = 3.141592653;
    printf("PI with 9 decimal places %f\n", pi);
    printf("Simplified PI with only two decimal places: %.2f\n", pi);
    printf("\aEnter the first value: ");
    int f_value;
    scanf("%d", &f_value);
    printf("Enter the second value: ");
    int s_value;
    scanf("%d", &s_value);
    printf("The values entered are: %d e %d\n", f_value, s_value);
}