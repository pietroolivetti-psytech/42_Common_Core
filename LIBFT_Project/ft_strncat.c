#include "libft.h"
size_t ft_strlen(char *str);

char *ft_strncat( char *dest, const char *src, size_t n)
{
    size_t i, j;
    i = 0;

    j = ft_strlen(dest);

    while (src[i] && n > i)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}
