#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int ac, char **av)
{
    int c = av[1][0];
    if (ac > 1)
    {
        printf("Is digit? My Version(0 - no ; 1 - yes): %d\n", ft_isdigit(c));
        printf("Is digit? CTYPE (0 - no ; 1 - yes): %d\n\n", isdigit(c));

        printf("Is alphabet? My version(0 - no ; 1 - yes): %d\n", ft_isalpha(c));
        printf("Is alphabet? CTYPE (0 - no ; 1 - yes): %d\n\n", isalpha(c));

        printf("To lower (if alpha and caps): %c\n", ft_tolower(c));
        printf("To upper (ctype version): %c\n\n", tolower(c));

        printf("To upper (my version): %c\n", ft_toupper(c));
        printf("To upper (ctype version): %c\n\n", toupper(c));

        printf("Is alnum (my version): %d\n", ft_isalnum(c));
        printf("Is alnum (ctype version): %d\n\n", isalnum(c));

        printf("Is printable (my version): %d\n", ft_isprint(c));
        printf("Is printable (ctype version): %d\n\n", isprint(c));

        printf("Is ascii (my version): %d\n", ft_isascii(c));
        printf("Is ascii (ctype version): %d\n\n", isascii(c));
    }
}

