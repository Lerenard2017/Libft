#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const *temp;
	size_t	i;
	
	if (!s)
        	return (NULL);
	if (start > ft_strlen(s))
        	return (ft_strdup(""));
	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
