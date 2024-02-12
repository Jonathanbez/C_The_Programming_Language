#include <stdio.h>

int main
{
	series();
}

series(void)
{
	static int series_num;

	series_num = series_num+23;
	return (series_num);
}

