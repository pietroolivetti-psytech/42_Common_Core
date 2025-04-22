#include "../libft_tests.h"
#include "../../ft_strncmp.c"

int main()
{
    printf("Scenario 1: ft_strncmp(\"apple\", \"apple\", 5)\n");
    check(ft_strncmp("apple", "apple", 5) == strncmp("apple", "apple", 5));

    printf("\nScenario 2: ft_strncmp(\"apple\", \"apricot\", 3)\n");
    check(ft_strncmp("apple", "apricot", 3) == strncmp("apple", "apricot", 3));

    printf("\nScenario 3: ft_strncmp(\"abc\", \"abd\", 3)\n");
    check(ft_strncmp("abc", "abd", 3) == strncmp("abc", "abd", 3));

    printf("\nScenario 4: ft_strncmp(\"abc\", \"abc\", 0) (should return 0)\n");
    check(ft_strncmp("abc", "abc", 0) == strncmp("abc", "abc", 0));

    printf("\nScenario 5: ft_strncmp(\"a\", \"b\", 1)\n");
    check(ft_strncmp("a", "b", 1) == strncmp("a", "b", 1));

    printf("\nScenario 6: ft_strncmp(\"abc\", \"abcd\", 4)\n");
    check(ft_strncmp("abc", "abcd", 4) == strncmp("abc", "abcd", 4));

    printf("\nScenario 7: ft_strncmp(\"abcd\", \"abc\", 4)\n");
    check(ft_strncmp("abcd", "abc", 4) == strncmp("abcd", "abc", 4));

    printf("\nScenario 8: ft_strncmp(\"abc\\0def\", \"abc\", 6)\n");
    check(ft_strncmp("abc\0def", "abc", 6) == strncmp("abc\0def", "abc", 6));

    return 0;
}
