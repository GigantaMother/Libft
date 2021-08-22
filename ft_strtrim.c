#include "libft.h"

static int	ft_check(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*new_str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen (s1);
	k = 0;
	while (s1[i] && ft_check(s1[i], set))
		i++;
	while (j > i && ft_check(s1[j - 1], set))
		j--;
	new_str = malloc(sizeof(s1) * (j - i + 1));
	if (!new_str)
		return (NULL);
	while (i < j)
		new_str[k++] = s1[i++];
	new_str[k] = '\0';
	return (new_str);
}

static int	ft_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
