#include "libft.h"

static int	ft_count(char const *str, char cum);
static int	ft_len(char const *str, int i, char c);
static char	**ft_log(char const *s, char c, char **tab);
static char	**ft_free(char **tab, size_t i);

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	ft_log(s, c, tab);
	return (tab);
}

static char	**ft_log(char const *s, char c, char **tab)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * (ft_len(s, i, c) + 1));
			if (tab[j] == NULL)
				return (ft_free(tab, i));
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}

static int	ft_count(char const *str, char cum)
{
	int		c;
	int		i;
	int		log;

	c = 0;
	i = 0;
	log = 1;
	while (str[i])
	{
		if (str[i] != cum && log == 1)
		{
			log = 0;
			c++;
		}
		else if (str[i] == cum)
		{
			log = 1;
		}
		i++;
	}
	return (c);
}

static int	ft_len(char const *str, int i, char c)
{
	int		cnt;

	cnt = 0;
	while (str[i] && str[i] != c)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

static char	**ft_free(char **tab, size_t i)
{
	while (i--)
	{
		if (!tab[i] || !*tab[i])
			break ;
		free(tab[i]);
		tab[i] = NULL;
	}
	free(*tab);
	return (NULL);
}
