#include <stdio.h>

void series(void);

int main()
{
	series();
	return 0;
}

void series(void)
{
	static int series_num = 0;
	series_num = series_num + 23;
	printf("%d\n", series_num);
}

