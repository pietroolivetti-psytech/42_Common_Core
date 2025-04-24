#include "../libft_tests.h"
#include "../../ft_isprint.c"

int main()
{
    printf("Scenario 1: ft_isprint(31) → one below printable range\n");
    printf("Is printable? [0 = False]: 31 = %d\n", ft_isprint(31));
    check(!ft_isprint(31));

    printf("\nScenario 2: ft_isprint(32) → space (first printable)\n");
    printf("Is printable? [0 = False]: 32 = %d\n", ft_isprint(32));
    check(ft_isprint(32));

    printf("\nScenario 3: ft_isprint(126) → tilde ~ (last printable)\n");
    printf("Is printable? [0 = False]: 126 = %d\n", ft_isprint(126));
    check(ft_isprint(126));

    printf("\nScenario 4: ft_isprint(127) → DEL (non-printable)\n");
    printf("Is printable? [0 = False]: 127 = %d\n", ft_isprint(127));
    check(!ft_isprint(127));

    printf("\nScenario 5: ft_isprint('A') → printable alpha\n");
    printf("Is printable? [0 = False]: 'A' = %d\n", ft_isprint('A'));
    check(ft_isprint('A'));

    printf("\nScenario 6: ft_isprint('\\n') → newline (non-printable)\n");
    printf("Is printable? [0 = False]: '\\n' = %d\n", ft_isprint('\n'));
    check(!ft_isprint('\n'));

    return 0;
}
