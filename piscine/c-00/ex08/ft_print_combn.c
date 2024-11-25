#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(const int *num, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar((char)(num[i] + '0'));
		i++;
	}
}

int	ft_get_idx(const int *num, int n)
{
	int	max;
	int	i;

	max = 10 - n;
	i = 0;
	while (i < n)
	{
		if (num[i] == max)
		{
			return (i - 1);
		}
		if (i == n - 1)
		{
			return (i);
		}
		max++;
		i++;
	}
	return (-1);
}

void	ft_increment(int *num, int n, int idx)
{
	int	i;

	num[idx]++;
	i = idx + 1;
	while (i < n)
	{
		num[i] = num[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	idx;
	int	i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
	while (ft_get_idx(num, n) != -1)
	{
		idx = ft_get_idx(num, n);
		ft_print(num, n);
		ft_increment(num, n, idx);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_print(num, n);
}
