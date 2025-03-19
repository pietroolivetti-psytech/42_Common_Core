#include "libft.h"
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t len)
{
    if (dest == NULL && src == NULL)
        return (NULL);
    size_t i = 0;

    while(i < len)
    {
        ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
        i++;
    }
    return (dest);
}

#include <stdio.h>
int main ()
{
    char myname[] = "Pierre Olivier";
    char dest_cpy[15];
    ft_memcpy(dest_cpy, myname, 15);
    printf("%s\n", dest_cpy);

}
