#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	m;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	m = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[m] && (m + i < dstsize - 1))
	{
		dst[i + m] = src[m];
		m++;
	}
	if (i < dstsize)
		dst[i + m] = '\0';
	return (ft_strlen(src) + i);
}
