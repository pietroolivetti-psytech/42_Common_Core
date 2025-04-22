#include "../libft_tests.h"
#include "../../ft_isdigit.c" // or include libft.h if it's declared there

int main()
{
    printf("Scenario 1: ft_isdigit('0' - 1) → char before '0'\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", ('0' - 1), ft_isdigit('0' - 1));
    check(!ft_isdigit('0' - 1));

    printf("\nScenario 2: ft_isdigit('0') → boundary: lowest digit\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", '0', ft_isdigit('0'));
    check(ft_isdigit('0'));

    printf("\nScenario 3: ft_isdigit('9') → boundary: highest digit\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", '9', ft_isdigit('9'));
    check(ft_isdigit('9'));

    printf("\nScenario 4: ft_isdigit('9' + 1) → char after '9'\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", ('9' + 1), ft_isdigit('9' + 1));
    check(!ft_isdigit('9' + 1));

    printf("\nScenario 5: ft_isdigit('a') → non-digit alpha\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", 'a', ft_isdigit('a'));
    check(!ft_isdigit('a'));

    printf("\nScenario 6: ft_isdigit(' ') → whitespace\n");
    printf("Is digit? [0 = False]: '%c' = %d\n", ' ', ft_isdigit(' '));
    check(!ft_isdigit(' '));

    printf("\nScenario 7: ft_isdigit(5) → non-printable ASCII\n");
    printf("Is digit? [0 = False]: 5 = %d\n", ft_isdigit(5));
    check(!ft_isdigit(5));

    return 0;
}
