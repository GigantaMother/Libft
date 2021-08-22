#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new_str;
	size_t	size_total;

	size_total = count * size;
	new_str = malloc(size_total);
	if (new_str == NULL)
		return (NULL);
	ft_bzero(new_str, size_total);
	return (new_str);
}
