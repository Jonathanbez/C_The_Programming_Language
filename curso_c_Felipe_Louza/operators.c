#include <stdio.h>

void lgc_op_and();
void lgc_op_or();
void lgc_op_not();

int main()
{
       	int x = 10;
	int y = 2;
	
	printf("%d\n", x == y + 8);
	lgc_op_and();
	lgc_op_or();
	lgc_op_not();
	
	return 0;
    
}
// output: 0 false / 1 true

void lgc_op_and()
{
	printf("Logical AND(&&)\n");
    	printf("X | Y = X && Y\n");
    	printf("1 | 1 =   1   \n");
    	printf("1 | 0 =   0   \n");
    	printf("0 | 1 =   0   \n");
    	printf("0 | 0 =   0   \n");
}

void lgc_op_or()
{
	printf("Logical OR(||)\n");
	printf("X | Y = X || Y\n");
	printf("1 | 1 =   1   \n");
	printf("1 | 0 =   1   \n");
	printf("0 | 1 =   1   \n");
	printf("0 | 0 =   0   \n");
}

void lgc_op_not()
{
	printf("Logical NOT(!)\n");
        printf("X | !X\n");
	printf("0 = 1\n");
	printf("1 = 0\n");
}

void example()
	printf("AND - ");
