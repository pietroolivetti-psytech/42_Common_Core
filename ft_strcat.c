#include "libft.h"
size_t ft_strlen(char *str);

char *ft_strcat(char *dest, const char *src)
{
    size_t i = ft_strlen(dest);
    while (*src)
    {
        dest[i] = *src;
        src++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
