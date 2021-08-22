#include "libft.h"

static	size_t	ft_size(int nb);

void	ft_putnbr_fd(int n, int fd)
{
	size_t	size;

	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		size = ft_size(n);
		while (size > 0)
		{
			ft_putchar_fd((n / size + 48), fd);
			n %= size;
			size /= 10;
		}
	}
}

static	size_t	ft_size(int nb)
{
	size_t	size;
	size_t	vrem;

	size = 1;
	vrem = nb;
	while (vrem > 0)
	{
		size = size * 10;
		vrem = vrem / 10;
	}
	size = size / 10;
	return (size);
}
