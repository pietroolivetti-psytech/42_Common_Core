#include "libft.h"
//size_t ft_strlen(char *str);

size_t ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	d;
	size_t	s;
	size_t	f;

	d = 0;
	s = 0;
	f = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (d >= dest_size)
		return (dest_size + s);
	while (f < (dest_size - 1 - d) && src[f] != '\0')
	{
		dest[d + f] = src[f];
		f++;
	}
	dest[d + f] = '\0';
	return (d + s);
}
