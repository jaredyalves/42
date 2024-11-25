#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(char c, char d)
{
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_genblock(int i)
{
	if (i <= 9)
	{
		ft_putchar2('0', i + '0');
	}
	else
	{
		ft_putchar2((i / 10) + '0', (i % 10) + '0');
	}
}

void	ft_print(int i, int j)
{
	ft_genblock(i);
	ft_putchar(' ');
	ft_genblock(j);
	if (i != 98 || j != 99)
	{
		ft_putchar2(',', ' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}
