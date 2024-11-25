#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	li;

	li = nb;
	if (li < 0)
	{
		ft_putchar('-');
		li *= -1;
	}
	if (li < 10)
	{
		ft_putchar(li + '0');
		return ;
	}
	else
	{
		ft_putnbr(li / 10);
	}
	ft_putnbr(li % 10);
}
