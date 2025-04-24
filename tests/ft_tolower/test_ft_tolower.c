#include "../libft_tests.h"
#include "../../ft_tolower.c"

int main()
{
    printf("Scenario 1: ft_tolower('A') → uppercase to lowercase\n");
    printf("ft: %c | original: %c\n", ft_tolower('A'), tolower('A'));
    check(ft_tolower('A') == tolower('A'));

    printf("\nScenario 2: ft_tolower('Z') → uppercase boundary\n");
    printf("ft: %c | original: %c\n", ft_tolower('Z'), tolower('Z'));
    check(ft_tolower('Z') == tolower('Z'));

    printf("\nScenario 3: ft_tolower('a') → already lowercase\n");
    printf("ft: %c | original: %c\n", ft_tolower('a'), tolower('a'));
    check(ft_tolower('a') == tolower('a'));

    printf("\nScenario 4: ft_tolower('!') → non-alpha\n");
    printf("ft: %c | original: %c\n", ft_tolower('!'), tolower('!'));
    check(ft_tolower('!') == tolower('!'));

    printf("\nScenario 5: ft_tolower('9') → number\n");
    printf("ft: %c | original: %c\n", ft_tolower('9'), tolower('9'));
    check(ft_tolower('9') == tolower('9'));

	printf("\nScenario 6: ft_tolower('\\t') → tab\n");
    printf("ft: %c | original: %c\n", ft_tolower('\t'), tolower('\t'));
    check(ft_tolower('\t') == tolower('\t'));

    return 0;
}
