#include "../libft_tests.h"
#include "../../ft_strdup.c"
#include "../../ft_strlen.c"

int main()
{
	char *s1 = "Copy this!";
	char *cpys1 = ft_strdup(s1);


	printf("\nScenario 1: ft_strdup(\"Copy this!\")\n");
    printf("ft: %s | original: %s\n", cpys1, strdup(s1));
    check(!strcmp(cpys1, strdup(s1)));

	printf("\nScenario 2: ft_strdup(\"\") → empty\n");
    printf("ft: %s | original: %s\n", ft_strdup(""), strdup(""));
    check(!strcmp(ft_strdup(""), strdup("")));
}