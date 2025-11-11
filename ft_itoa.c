#include "libft.h"

static int	len_int(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char    *ft_strrev(char *str, int start)
{
	int	i;
	int	len;
	char	tmp;


	i = start;
	len = start;
	while (str[len])
		len++;
	while (i < len - 1)
	{
		tmp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	i;
	int	is_neg;

	len = int_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	is_neg = 0;
	if (n < 0)
	{
		str[0] = '-';
		is_neg = 1;
	}
	i = is_neg;
	while (i < len)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	str = ft_strrev(str, is_neg);
	str[i] = 0;
	return (str);
}
