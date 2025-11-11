#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*temp;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	temp = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len1)
		temp[i] = s1[i++];
	j = 0;
	while (j < len2)
		temp[i] = s2[j++];
	temp[i] = 0;
	return (temp);
}
