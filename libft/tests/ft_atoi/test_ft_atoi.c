#include "../libft_tests.h"
#include "../../ft_atoi.c"

int main()
{
    printf("Scenario 1: ft_atoi(\"\\t\\n\\v\\f\\r1\")\n");
    check(ft_atoi("\t\n\v\f\r1") == atoi("\t\n\v\f\r1"));

    printf("\nScenario 2: ft_atoi(\"\\t\\n\\va1\")\n");
    check(ft_atoi("\t\n\va1") == atoi("\t\n\va1"));

    printf("\nScenario 3: ft_atoi(\"\\t\\n\\v--1\")\n");
    check(ft_atoi("\t\n\v--1") == atoi("\t\n\v--1"));

    printf("\nScenario 4: ft_atoi(\"\\t\\n\\v++1\")\n");
    check(ft_atoi("\t\n\v++1") == atoi("\t\n\v++1"));

    printf("\nScenario 5: ft_atoi(\"\\t\\n\\v+1\")\n");
    check(ft_atoi("\t\n\v+1") == atoi("\t\n\v+1"));

    printf("\nScenario 6: ft_atoi(\"\\t\\n\\v-1\")\n");
    check(ft_atoi("\t\n\v-1") == atoi("\t\n\v-1"));

    printf("\nScenario 7: ft_atoi(\"\\t\\n\\v0\")\n");
    check(ft_atoi("\t\n\v0") == atoi("\t\n\v0"));

    printf("\nScenario 8: ft_atoi(\"+40+2Porto\")\n");
    check(ft_atoi("+40+2Porto") == atoi("+40+2Porto"));

    printf("\nScenario 9: ft_atoi(\"+101\")\n");
    check(ft_atoi("+101") == atoi("+101"));

    printf("\nScenario 10: ft_atoi(\"2147483647\") (INT_MAX)\n");
    check(ft_atoi("2147483647") == atoi("2147483647"));

    printf("\nScenario 11: ft_atoi(\"-2147483648\") (INT_MIN)\n");
    check(ft_atoi("-2147483648") == atoi("-2147483648"));

    printf("\nScenario 12: ft_atoi(\"-+42\")\n");
    check(ft_atoi("-+42") == atoi("-+42"));

    printf("\nScenario 13: ft_atoi(\"+-42\")\n");
    check(ft_atoi("+-42") == atoi("+-42"));

    printf("\nScenario 14: ft_atoi(\"+\\t42\")\n");
    check(ft_atoi("+\t42") == atoi("+\t42"));

    printf("\nScenario 15: ft_atoi(\"-\\t42\")\n");
    check(ft_atoi("-\t42") == atoi("-\t42"));

    printf("\nScenario 16: ft_atoi(\"1\\t42\")\n");
    check(ft_atoi("1\t42") == atoi("1\t42"));

    printf("\nScenario 17: ft_atoi(\"-1\\t42\")\n");
    check(ft_atoi("-1\t42") == atoi("-1\t42"));

    return 0;
}
