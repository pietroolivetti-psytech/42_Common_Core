#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i = 0;

    while(i < n)
    {
        if (((unsigned char *)src)[i] == c)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            ((unsigned char *)dest)[i+1] = '\0';
            return (dest);
        }
        else
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    ((unsigned char *)dest)[i+1] = '\0';
    return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
    char myname[] = "Pierre Olivier";
    char dest_cpy[15];
    ft_memccpy(dest_cpy, myname, 'l', 12);
    printf("%s\n", dest_cpy);

    char myname2[] = "Pietro Olivetti";
    char dest_cpy2[15];
    memccpy(dest_cpy2, myname2, 'l', 12);
    printf("%s\n", dest_cpy2);
}
*/
