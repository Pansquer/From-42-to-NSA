#include "libft.h"

static int	ft_size(unsigned int n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	int				neg;
	unsigned int	nb;

	neg = 0;
	nb = n;
	if (n < 0 && ++neg)
		nb = -n;
	size = ft_size(nb) + neg;
	str = malloc(size + 1);
	if (!str)
		return (0);
	str[size] = 0;
	while (size--)
	{
		str[size] = nb % 10 + 48;
		nb = nb / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
