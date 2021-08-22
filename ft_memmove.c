#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*h;
	size_t			i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	p = (unsigned char *)dst;
	h = (unsigned char *)src;
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			*(p + len) = *(h + len);
		}
	}
	else
	{
		while (++i < len)
			*(p + i) = *(h + i);
	}
	return (dst);
}
