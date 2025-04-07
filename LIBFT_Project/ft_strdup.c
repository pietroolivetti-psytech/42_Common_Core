#include "libft.h"
#include <stdlib.h>
size_t ft_strlen(char *str);

char *ft_strdup(char *src)
{
    char *new;
    int i = 0;

    //create new string with malloc and check
    if(!(new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
        return NULL;
    while(*src)
        new[i++] = *src++;
    new[i] = '\0';

    return (new);
}
