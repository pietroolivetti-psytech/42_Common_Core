#include "../libft_tests.h"
#include "../../ft_toupper.c"

int main()
{
    printf("Scenario 1: ft_toupper('a') → lowercase to uppercase\n");
    printf("ft: %c | original: %c\n", ft_toupper('a'), toupper('a'));
    check(ft_toupper('a') == toupper('a'));

    printf("\nScenario 2: ft_toupper('z') → lowercase boundary\n");
    printf("ft: %c | original: %c\n", ft_toupper('z'), toupper('z'));
    check(ft_toupper('z') == toupper('z'));

    printf("\nScenario 3: ft_toupper('A') → already uppercase\n");
    printf("ft: %c | original: %c\n", ft_toupper('A'), toupper('A'));
    check(ft_toupper('A') == toupper('A'));

    printf("\nScenario 4: ft_toupper('!') → non-alpha\n");
    printf("ft: %c | original: %c\n", ft_toupper('!'), toupper('!'));
    check(ft_toupper('!') == toupper('!'));

    printf("\nScenario 5: ft_toupper('1') → number\n");
    printf("ft: %c | original: %c\n", ft_toupper('1'), toupper('1'));
    check(ft_toupper('1') == toupper('1'));

    return 0;
}
