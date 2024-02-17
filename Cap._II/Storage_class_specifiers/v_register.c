#include <stdio.h>

int int_pwr(register int m, register int e)
{
	register int temp;

	temp = 1;

	for(; e; e--;) temp = temp * m;
	return temp;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int result = int_pwr(a, b);
	printf("Result: %d\n", result);
	return 0;
}

