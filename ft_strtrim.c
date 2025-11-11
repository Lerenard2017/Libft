#include "libft.h"

static int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;

	len = ft_strlen(s1);
	start = 0;
	if (ft_strlen(s1) == 0)
        	return (ft_strdup(""));
	while (is_charset(s1[i], set))
		start++;
	while (is_charset(s1[len - 1], set))
		len--;
	return (ft_substr(s1, start, len - start));
}
