#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i <= n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

/*
const: Prevents modification of src inside the function, ensuring read-only access.
size_t: unsigned integer type used for sizes and indexing.Platform-dependent size (e.g., 32-bit = 4 bytes, 64-bit = 8 bytes).
Guaranteed to hold any array or object size in memory. Prevents negative values, unlike int.
*/
