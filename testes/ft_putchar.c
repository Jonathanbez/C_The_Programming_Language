#include <unistd.h>

void ft_putstr(char *strC)
{
	while(*strC != '\0')
	{
		write(1, &strC, 1);
		strC++;
	}
}


int main()
{
	ft_putstr('Hello Word of programming, im dev Jonathan!');
	return(0);
}

