#include "../libft_tests.h"
#include "../../ft_isalnum.c"
#include "../../ft_isalpha.c" // required by ft_isalnum
#include "../../ft_isdigit.c" // required by ft_isalnum

int main()
{
    printf("Scenario 1: ft_isalnum('a') → lowercase alpha\n");
    printf("Is alnum? [0 = False]: 'a' = %d\n", ft_isalnum('a'));
    check(ft_isalnum('a'));

    printf("\nScenario 2: ft_isalnum('Z') → uppercase alpha\n");
    printf("Is alnum? [0 = False]: 'Z' = %d\n", ft_isalnum('Z'));
    check(ft_isalnum('Z'));

    printf("\nScenario 3: ft_isalnum('5') → digit\n");
    printf("Is alnum? [0 = False]: '5' = %d\n", ft_isalnum('5'));
    check(ft_isalnum('5'));

    printf("\nScenario 4: ft_isalnum(' ') → space\n");
    printf("Is alnum? [0 = False]: ' ' = %d\n", ft_isalnum(' '));
    check(!ft_isalnum(' '));

    printf("\nScenario 5: ft_isalnum('@') → special character\n");
    printf("Is alnum? [0 = False]: '@' = %d\n", ft_isalnum('@'));
    check(!ft_isalnum('@'));

    printf("\nScenario 6: ft_isalnum(0) → null char (non-printable)\n");
    printf("Is alnum? [0 = False]: 0 = %d\n", ft_isalnum(0));
    check(!ft_isalnum(0));

    return 0;
}
