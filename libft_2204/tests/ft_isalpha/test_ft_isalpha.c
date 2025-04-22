#include "../../ft_isalpha.c"
#include "../libft_tests.h"

int main()
{
    printf("Scenario 1: ft_isalpha('a' - 1) → char before 'a'\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", ('a' - 1), ft_isalpha('a' - 1));
    check(!ft_isalpha('a' - 1));

    printf("\nScenario 2: ft_isalpha('a') → lowercase a\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", 'a', ft_isalpha('a'));
    check(ft_isalpha('a'));

    printf("\nScenario 3: ft_isalpha('z' + 1) → char after 'z'\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", ('z' + 1), ft_isalpha('z' + 1));
    check(!ft_isalpha('z' + 1));

    printf("\nScenario 4: ft_isalpha('z') → lowercase z\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", 'z', ft_isalpha('z'));
    check(ft_isalpha('z'));

    printf("\nScenario 5: ft_isalpha('A' - 1) → char before 'A'\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", ('A' - 1), ft_isalpha('A' - 1));
    check(!ft_isalpha('A' - 1));

    printf("\nScenario 6: ft_isalpha('A') → uppercase A\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", 'A', ft_isalpha('A'));
    check(ft_isalpha('A'));

    printf("\nScenario 7: ft_isalpha('Z' + 1) → char after 'Z'\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", ('Z' + 1), ft_isalpha('Z' + 1));
    check(!ft_isalpha('Z' + 1));

    printf("\nScenario 8: ft_isalpha('Z') → uppercase Z\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", 'Z', ft_isalpha('Z'));
    check(ft_isalpha('Z'));

    printf("\nScenario 9: ft_isalpha('@') → special character\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", '@', ft_isalpha('@'));
    check(!ft_isalpha('@'));

    printf("\nScenario 10: ft_isalpha('[') → char after Z in ASCII\n");
    printf("Is it in the alphabet? [0 = False]: %c = %d\n", '[', ft_isalpha('['));
    check(!ft_isalpha('['));

    return 0;
}
