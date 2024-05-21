
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d < s && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
