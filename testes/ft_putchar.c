#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putchar("Hello Word of programming, im dev Jonathan!");
	return(0);
}

