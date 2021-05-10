#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	unsigned char	a;

	a = (unsigned char)c;
	tmp1 = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while (n)
	{
		*tmp1 = *tmp2;
		tmp1++;
		n--;
		if (*tmp2 == a)
			return (tmp1);
		tmp2++;
	}
	return (NULL);
}
