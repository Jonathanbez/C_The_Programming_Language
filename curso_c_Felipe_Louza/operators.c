#include <stdio.h>

void lgc_op_and();
void lgc_op_or();
void lgc_op_not();
void example();

int main()
{
       	int x = 10;
	int y = 2;
	
	printf("%d\n", x == y + 8);
	lgc_op_and();
	lgc_op_or();
	lgc_op_not();
	example(x, y);
	
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
	printf("1 = 0\n\n");
}

void example(int x, int y)
{
	printf("NOT: X && Y = output: %d\n", (x != 1 && y != 20));
	printf("X == Y + 8 output: %d\n", x == y + 8);
	printf("a = 0.1 < 0.3 < 0.5 \noutput: false \nhuman logic: true\n");
	printf("in code C (0.1 < 0.3) && (0.3 < 0.5) output:%d", (0.1 < 0.3) && (0.3 < 0.5));
}
