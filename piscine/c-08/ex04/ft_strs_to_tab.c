#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	stock_str = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (stock_str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock_str[i].str = av[i];
		stock_str[i].size = ft_strlen(av[i]);
		stock_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str[i].str = 0;
	stock_str[i].size = 0;
	stock_str[i].copy = 0;
	return (stock_str);
}
