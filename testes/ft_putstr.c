#include <unistd.h>

void ft_putstr(char *strc)
{
	while(*strc != '\0')
	{
		write(1, strc, 1);
		strc++;
	}
}

int main(void)
{
	ft_putstr("Hello Word of programming, im dev Jonathan!\n");
	ft_putstr("\n");
	return(0);
}

