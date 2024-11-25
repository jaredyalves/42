unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size > dlen)
	{
		while (i < size - dlen - 1 && src[i] != '\0')
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[dlen + i] = '\0';
		return (dlen + slen);
	}
	else
	{
		while (i < size)
			i++;
		return (slen + i);
	}
}
