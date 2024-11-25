#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	i;
	int	wrd_len;
	int	sep_len;

	i = 0;
	wrd_len = 0;
	sep_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		wrd_len += ft_strlen(strs[i]);
		i++;
	}
	return (wrd_len + sep_len);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	if (size == 0)
		return ((char *)malloc(1));
	len = ft_strslen(size, strs, sep);
	str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += ft_strlen(sep);
		}
		i++;
	}
	*str = '\0';
	return (str - len);
}
