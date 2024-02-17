#include <stdio.h>

int_pwr(register int m, register int e)
{
	register int temp;

	temp = 1;

	for(; e; e--) temp = * m;
	return temp;
}

int main()
{
	int_pwr(5, 5);
	return 0;
}

