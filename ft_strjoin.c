#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	size = (ft_strlen(s1) + ft_strlen(s2) + 1) * (sizeof(*s1));
	new_str = (char *)malloc(size);
	if (new_str == NULL)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = '\0';
	return (new_str);
}
