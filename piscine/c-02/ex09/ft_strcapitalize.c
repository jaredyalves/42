int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alphabet(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alphabet(str[i]) && !ft_char_is_numeric(str[i]))
		{
			i++;
			continue ;
		}
		j = i;
		while (ft_char_is_alphabet(str[j]) || ft_char_is_numeric(str[j]))
		{
			if (ft_char_is_uppercase(str[j]))
				str[j] += 32;
			j++;
		}
		if (!ft_char_is_numeric(str[i]))
			str[i] -= 32;
		i = j;
	}
	return (str);
}
