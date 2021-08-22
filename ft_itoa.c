#include "libft.h"

static char	*ft_cpy(char *dst, const char *src, size_t dstsize);
static int	ft_size(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		stop;

	stop = 0;
	size = ft_size(n);
	str = malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_cpy(str, "-2147483648", 11));
	str[size--] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		stop = 1;
	}
	while (size >= stop)
	{
		str[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	return (str);
}

static int	ft_size(int n)
{
	int	len;

	if (n == -2147483648)
		return (11);
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_cpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
