#include <stdio.h>

//Format Specifiers for tell the compiler about the type of data
//in operations of input and output

int main()
{
    /*
    int x = 10, y = 30;
    char c = 'X';
    double z = 2.2;
    printf("%d %d %c\n", x,y,c);
    printf("\nSyntax follows the order of the specifier with the variables informed of left for right\n");
    printf("%d %s %f %f\n", x, "+", z, x+z);
    float pi = 3.141592653;
    printf("PI with 9 decimal places %f\n", pi);
    printf("Simplified PI with only two decimal places: %.2f\n", pi);
    
    printf("List of Formart Specifiers:\n");
    printf("%%d read a Int\n");
    printf("%%ld read a Long Int\n");
    printf("%%f read a Float\n");
    printf("%%ls read a Double\n");
    printf("%%c read a Char\n");
    printf("%%s read String\n");
    */

    printf("\aEnter the first value: ");
    int f_value;
    scanf("%d", &f_value);
    printf("Enter the second value: ");
    int s_value;
    scanf("%d", &s_value);
    printf("The values entered are: %d e %d\n", f_value, s_value);

    return 0;
}