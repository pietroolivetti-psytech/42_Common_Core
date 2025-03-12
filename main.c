#include "libft.h"
#include <stdio.h>

int main(int ac, char **av)
{
    int c = av[1][0];
    if (ac > 1)
        printf("Is digit? (0 - no ; 1 - yes): %d\n", ft_isdigit(c));

}

