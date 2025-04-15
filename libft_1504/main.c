#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int c = av[1][0];
    //char *s1 = av[1];
    //char *s2 = av[2];
    char *s1 = ft_strdup(av[1]);
    char *s2 = ft_strdup(av[2]);

    char ex1[100] = "012345";
    char ex2[100] = "98765";

    char dest_to_copy[1000];
    size_t limit_to_copy = 5;

    char *mydup, *libdup;

    if (ac > 1)
    {
        printf("Results that take only the first char in consideration:\n-------------------------------------------\n");
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

        printf("Results that take the whole 1st string in consideration:\n-------------------------------------------\n");

        printf("Str length (my version): %lu\n", ft_strlen(s1));
        printf("Str length (string.h version): %lu\n\n", strlen(s1));
        //size_t is an unsigned long (%lu)

        printf("Printing copy (my version): %s\n", ft_strcpy(dest_to_copy, s1));
        printf("Printing copy (string.h version): %s\n\n", strcpy(dest_to_copy, s1));

        printf("Printing copy until %lu (my version): %s\n", limit_to_copy, ft_strncpy(dest_to_copy, s1, limit_to_copy));
        printf("Printing copy until %lu (string.h version): %s\n\n", limit_to_copy, strncpy(dest_to_copy, s1, limit_to_copy));

        printf("Results that work with 2 or more strings:\n-------------------------------------------\n");

        printf("STRCMP (my version): %d\n", ft_strcmp(s1, s2));
        printf("STRCMP (string.h version): %d\n\n", strcmp(s1, s2));

        printf("STRNCMP n=5 (my version): %d\n", ft_strncmp(s1, s2, limit_to_copy));
        printf("STRNCMP n=5 (string.h version): %d\n\n", strncmp(s1, s2, limit_to_copy));
        //comparison must stop in n - 1 so as the return line return the cmp of the nth chars


        printf("STRCAT (MY version): %s\n", ft_strcat(s1, s2));
        printf("STRCAT (string.h version): %s\n\n", strcat(s1, s2));
        //investigate why string.h version goes wrong

        printf("STRNCAT (MY version): %s\n", ft_strncat(s1, s2, 3));
        printf("STRNCAT (string.h version): %s\n\n", strncat(s1, s2, 3));

        printf("STRLCAT (MY version): %ld\n\n", ft_strlcat(s1, s2, 3));
        //printf("STRLCAT (string.h version): %d\n", strlcat(s1, s2, 3));

        mydup = ft_strdup(av[1]);
        libdup = ft_strdup(av[1]);
        printf("STRDUP (My version): %s\n", mydup);
        printf("STRDUP (Lib version): %s\n\n", libdup);
    }
}

