#include "../libft_tests.h"
#include "../../ft_strrchr.c"

int main()
{
    char s[] = "banana";
    char s2[] = "alphabet";
    char s3[] = "";

    printf("Scenario 1: ft_strrchr(\"banana\", 'b')\n");
    check(ft_strrchr(s, 'b') == strrchr(s, 'b'));

    printf("\nScenario 2: ft_strrchr(\"banana\", 'a')\n");
    check(ft_strrchr(s, 'a') == strrchr(s, 'a'));

    printf("\nScenario 3: ft_strrchr(\"alphabet\", 'a')\n");
    check(ft_strrchr(s2, 'a') == strrchr(s2, 'a'));

    printf("\nScenario 4: ft_strrchr(\"banana\", 'z')\n");
    check(ft_strrchr(s, 'z') == strrchr(s, 'z'));

    printf("\nScenario 5: ft_strrchr(\"banana\", '\\0')\n");
    check(ft_strrchr(s, 0) == strrchr(s, 0));

    printf("\nScenario 6: ft_strrchr(\"banana\", 'b' + 256)\n");
    check(ft_strrchr(s, 'b' + 256) == strrchr(s, 'b' + 256));

    char *empty = (char *)calloc(1, 1);
    printf("\nScenario 7: ft_strrchr(empty, 'x')\n");
    check(ft_strrchr(empty, 'x') == strrchr(empty, 'x'));
    free(empty);

    printf("\nScenario 8: ft_strrchr(\"\", '\\0')\n");
    check(ft_strrchr(s3, 0) == strrchr(s3, 0));

    return 0;
}
