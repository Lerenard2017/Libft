#include "libft.h"

static int	word_count(const char *str, char c);

char	*create_new_word(tab, s, len, start)
{
	char	*word;
	int	i;

	word = malloc(sizeof(char) * (len_nbr + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len_nbr)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = 0;
	return (word);
}

static void *ft_free(char **strs, int count)
{
    int	i;

    i = 0;
    while (i < count)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
    return (NULL);
}

char **ft_split(char const *s, char c)
{
	char	**tab;
	int	i;
	int	nbr_word;
	int	len_nbr;
	
	tab = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	nbr_word = 0;
	while (s[i])
	{
		len_nbr = 0;
		while (s[i] && s[i] != c)
		{
			len_nbr++;
			i++;
		}
		if (len_nbr != 0)
		{
			tab[nbr_word] = create_new_word(tab, s, len_nbr, i - len_nbr);
			if (!tab[nbr_word])
				return (ft_free(tab, nbr_word));
			nbr_word++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	tab[nbr_word] = NULL;
	return (tab);
}

static int word_count(const char *str, char c)
{
    int count;
    int x;

    count = 0;
    x = 0;
    while (*str)
    {
        if (*str != c && x == 0)
        {
            x = 1;
            count++;
        }
        else if (*str == c)
            x = 0;
        str++;
    }
    return (count);
}
