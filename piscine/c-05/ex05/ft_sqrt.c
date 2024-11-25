int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 0)
	{
		while (i * i <= nb)
		{
			if (i >= 46341)
				return (0);
			if (i * i == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
