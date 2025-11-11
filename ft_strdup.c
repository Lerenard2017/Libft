#include "libft.h"

static int	ft_strlen(const char *str)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		i++;
		count++;
	}
	return (temp);
}

char	*ft_strdup(const char *s)
{
	const char *temp;
	int	i;
	int	len;

	len = ft_strlen(s);
	temp = malloc(sizeof(const char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len);
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
