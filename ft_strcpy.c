#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    char d[50];

    ft_strcpy(d, "testing");
    printf("%s", d);

    return 0;
}
*/
