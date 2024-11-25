void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	idx;
	int	i;

	i = 0;
	idx = size - 1;
	while (i < size / 2)
	{
		aux = tab[idx];
		tab[idx] = tab[i];
		tab[i] = aux;
		i++;
		idx--;
	}
}
