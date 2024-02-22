#include <unistd.h>

void ft_putstr(char *strc)
{
	while(*strc != '\n')
	{
		write(1, strc, 1);
		strc++;
	}
}


int main()
{
	ft_putstr("Hello Word of programming, im dev Jonathan!\n");
	return(0);
}

