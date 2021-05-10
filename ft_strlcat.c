#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && j + i + 1 < dstsize)
	{
		dst[j + i] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[j + i] = '\0';
	return (i + ft_strlen(src));
}
