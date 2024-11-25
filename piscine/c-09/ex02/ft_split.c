#include <stdlib.h>

int	ft_check_sep(char chr, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (chr == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check_sep(str[i], charset))
		i++;
	return (i);
}

int	ft_strslen(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (str[i] && ft_check_sep(str[i], charset))
			i++;
		if (str[i])
			len++;
		while (str[i] && !ft_check_sep(str[i], charset))
			i++;
	}
	return (len);
}

char	*ft_word(char *str, char *charset)
{
	int		i;
	int		wrd_len;
	char	*word;

	i = 0;
	wrd_len = ft_strlen(str, charset);
	word = (char *)malloc((wrd_len + 1) * sizeof(char));
	while (i < wrd_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;

	i = 0;
	strs = (char **)malloc((ft_strslen(str, charset) + 1) * sizeof(char *));
	while (*str)
	{
		while (*str && ft_check_sep(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !ft_check_sep(*str, charset))
			str++;
	}
	strs[i] = 0;
	return (strs);
}
