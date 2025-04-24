#include "../libft_tests.h"
#include "../../ft_strchr.c"

int main()
{
    char s[] = "banana";
    char s2[] = "alphabet";
    char s3[] = "";

    printf("Scenario 1: ft_strchr(\"banana\", 'b')\n");
    check(ft_strchr(s, 'b') == strchr(s, 'b'));

    printf("\nScenario 2: ft_strchr(\"banana\", 'a')\n");
    check(ft_strchr(s, 'a') == strchr(s, 'a'));

    printf("\nScenario 3: ft_strchr(\"alphabet\", 'a')\n");
    check(ft_strchr(s2, 'a') == strchr(s2, 'a'));

    printf("\nScenario 4: ft_strchr(\"banana\", 'z')\n");
    check(ft_strchr(s, 'z') == strchr(s, 'z'));

    printf("\nScenario 5: ft_strchr(\"banana\", '\\0')\n");
    check(ft_strchr(s, 0) == strchr(s, 0));

    printf("\nScenario 6: ft_strchr(\"banana\", 'b' + 256)\n");
    check(ft_strchr(s, 'b' + 256) == strchr(s, 'b' + 256));

    char *empty = (char *)calloc(1, 1);
    printf("\nScenario 7: ft_strchr(empty, 'x')\n");
    check(ft_strchr(empty, 'x') == strchr(empty, 'x'));
    free(empty);

    printf("\nScenario 8: ft_strchr(\"\", '\\0')\n");
    check(ft_strchr(s3, 0) == strchr(s3, 0));

    return 0;
}
