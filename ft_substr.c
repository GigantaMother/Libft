#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	if (!s)
		return (NULL);
	new_str = malloc(sizeof(*s) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (len && start < ft_strlen(s) + 1)
	{
		new_str[i] = s[start];
		start++;
		len--;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
