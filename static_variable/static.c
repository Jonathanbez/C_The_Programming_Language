#include <stdio.h>

void series(void)
{
        static int series_num;

        series_num = series_num+23;
        return (series_num);
}


int main
{
	series();
}

