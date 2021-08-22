#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
					int c, size_t n)
{
	char		*p;
	const char	*t;

	p = dst;
	t = src;
	while (n > 0)
	{
		*p++ = *t++;
		if (*(p - 1) == (char)c)
			return (p);
		n--;
	}
	return (NULL);
}
