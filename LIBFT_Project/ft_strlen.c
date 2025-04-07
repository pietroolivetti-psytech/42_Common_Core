#include "libft.h"

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
/*
size_t ensures they can handle large strings without running into negative values.

#include <stdio.h>
int main()
{
    char s[50] = "Testing = 12";
    printf("%d", ft_strlen(s));
}
*/
