#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	m;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0] && i < len)
		{
			m = 0;
			while (needle[m] && i + m < len)
			{
				if (haystack[i + m] != needle[m])
					break ;
				m++;
			}
			if (needle[m] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
