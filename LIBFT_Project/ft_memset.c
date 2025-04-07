#include "libft.h"
/*
void ft_memset(void *block, int c, size_t len)
{
    size_t i = 0;
    while(i < len)
        ((unsigned char *)block)[i++] = c;
}
*/
/*
#include <stdio.h>
int main()
{
    char ex[20] = "Testing it!";
    ft_memset(ex, 'x', 7);
    printf("%s", ex);
}
block is a void pointer. (unsigned char *) is always = 1 byte so it allows byte-wise access.
*/

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b); // ← THIS IS CRITICAL
}
