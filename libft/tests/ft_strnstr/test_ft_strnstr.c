#include "../libft_tests.h"
#include "../../ft_strnstr.c"

int main()
{
    char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    char *empty = (char *)"";

    printf("\nTest 1: ft_strnstr(\"%s\", \"%s\", 0)\n", haystack, needle);
    check(ft_strnstr(haystack, needle, 0) == NULL);
    printf("Result: NULL\n");

    printf("\nTest 2: ft_strnstr(\"%s\", \"%s\", 100)\n", haystack, needle);
    check(ft_strnstr(haystack, needle, 100) == haystack + 1);
    printf("Result: %s\n", ft_strnstr(haystack, needle, 100));

    printf("\nTest 3: ft_strnstr(\"%s\", \"a\", 100)\n", haystack);
    check(ft_strnstr(haystack, "a", 100) == haystack);
    printf("Result: %s\n", ft_strnstr(haystack, "a", 100));

    printf("\nTest 4: ft_strnstr(\"%s\", \"c\", 100)\n", haystack);
    check(ft_strnstr(haystack, "c", 100) == haystack + 4);
    printf("Result: %s\n", ft_strnstr(haystack, "c", 100));

    printf("\nTest 5: ft_strnstr(\"\", \"\", 100)\n");
    check(ft_strnstr(empty, "", 100) == empty);
    printf("Result: \"%s\"\n", ft_strnstr(empty, "", 100));

    printf("\nTest 6: ft_strnstr(\"\", \"\", 0)\n");
    check(ft_strnstr(empty, "", 0) == empty);
    printf("Result: \"%s\"\n", ft_strnstr(empty, "", 0));

    printf("\nTest 7: ft_strnstr(\"\", \"coucou\", 100)\n");
    check(ft_strnstr(empty, "coucou", 100) == NULL);
    printf("Result: NULL\n");

    printf("\nTest 8: ft_strnstr(\"%s\", \"aaabc\", 5)\n", haystack);
    check(ft_strnstr(haystack, "aaabc", 5) == haystack);
    printf("Result: %s\n", ft_strnstr(haystack, "aaabc", 5));

    printf("\nTest 9: ft_strnstr(\"\", \"12345\", 5)\n");
    check(ft_strnstr(empty, "12345", 5) == NULL);
    printf("Result: NULL\n");

    printf("\nTest 10: ft_strnstr(\"%s\", \"abcd\", 9)\n", haystack);
    check(ft_strnstr(haystack, "abcd", 9) == haystack + 5);
    printf("Result: %s\n", ft_strnstr(haystack, "abcd", 9));

    printf("\nTest 11: ft_strnstr(\"%s\", \"cd\", 8)\n", haystack);
    check(ft_strnstr(haystack, "cd", 8) == NULL);
    printf("Result: NULL\n");

    printf("\nTest 12: ft_strnstr(\"%s\", \"a\", 1)\n", haystack);
    check(ft_strnstr(haystack, "a", 1) == haystack);
    printf("Result: %s\n", ft_strnstr(haystack, "a", 1));

    printf("\nTest 13: ft_strnstr(\"1\", \"a\", 1)\n");
    check(ft_strnstr("1", "a", 1) == NULL);
    printf("Result: NULL\n");

    printf("\nTest 14: ft_strnstr(\"22\", \"b\", 2)\n");
    check(ft_strnstr("22", "b", 2) == NULL);
    printf("Result: NULL\n");

    return 0;
}