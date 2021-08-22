#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		if (*p == (char)c)
			return (p);
		p++;
		i++;
	}
	return (NULL);
}
