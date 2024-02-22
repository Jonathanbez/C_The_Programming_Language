#include <unistd.h>

void ft_putstr(char *strc)
{
	while(*strc != '\n\0')
	{
		write(1, strc, 1);
		strc++;
	}
}

void	ft_putstr(char *str);
int main(void)
{
	ft_putstr("Hello Word of programming, im dev Jonathan!\n");
	ft_putstr("\n")
	return(0);
}

