#include "../libft_tests.h"
#include "../../ft_isascii.c" // or include header if already declared there

int main()
{
    printf("Scenario 1: ft_isascii(-1) → value below ASCII range\n");
    printf("Is ASCII? [0 = False]: -1 = %d\n", ft_isascii(-1));
    check(!ft_isascii(-1));

    printf("\nScenario 2: ft_isascii(0) → boundary: beginning of ASCII table\n");
    printf("Is ASCII? [0 = False]: 0 = %d\n", ft_isascii(0));
    check(ft_isascii(0));

    printf("\nScenario 3: ft_isascii(128) → value beyond ASCII (0–127)\n");
    printf("Is ASCII? [0 = False]: 128 = %d\n", ft_isascii(128));
    check(!ft_isascii(128));

    printf("\nScenario 4: ft_isascii(127) → boundary: highest valid ASCII\n");
    printf("Is ASCII? [0 = False]: 127 = %d\n", ft_isascii(127));
    check(ft_isascii(127));

    return 0;
}
