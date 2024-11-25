#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long int	li;

	li = nbr;
	if (li < 0)
	{
		ft_putchar('-');
		li *= -1;
	}
	if (li < 10)
	{
		ft_putchar((char)(li + '0'));
		return ;
	}
	else
		ft_putnbr((char)(li / 10));
	ft_putnbr((char)(li % 10));
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i++;
	}
}
