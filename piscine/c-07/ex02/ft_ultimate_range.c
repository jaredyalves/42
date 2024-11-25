#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*values;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	values = (int *)malloc((max - min) * sizeof(int));
	*range = values;
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		values[i] = min;
		i++;
		min++;
	}
	return (len);
}
