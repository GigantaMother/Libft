#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*h;

	i = 0;
	p = (unsigned char *)s1;
	h = (unsigned char *)s2;
	while (i < n)
	{
		if (*p != *h)
			return ((int)(*p - *h));
		p++;
		h++;
		i++;
	}
	return (0);
}
