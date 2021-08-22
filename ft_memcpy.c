#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*t;
	size_t			i;

	i = 0;
	p = (unsigned char *)dst;
	t = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
	return (dst);
}
