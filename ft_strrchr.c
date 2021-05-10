#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*out;

	out = NULL;
	while (*s)
	{
		if (*s == (char)c)
			out = (char *)s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (out);
}
