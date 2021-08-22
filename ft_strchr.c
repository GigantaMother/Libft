#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s) + 1;
	while (i < size)
	{
		if (*(s + i) == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
