#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort(char **sn, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ft_strcmp(sn[i], sn[j]) < 0)
			{
				tmp = sn[i];
				sn[i] = sn[j];
				sn[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (sn);
}

int	main(int argc, char **argv)
{
	char	**sorted;

	argv++;
	sorted = ft_sort(argv, argc - 1);
	while (argc - 1)
	{
		while (**sorted)
		{
			write(1, &(**sorted), 1);
			(*sorted)++;
		}
		write(1, "\n", 1);
		sorted++;
		argc--;
	}
	return (0);
}
