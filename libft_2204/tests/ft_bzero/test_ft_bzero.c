#include "../libft_tests.h"
#include "../../ft_bzero.c"

int main(void)
{
	char str[10];
	memset(str, 'p', 10);

	ft_bzero(str, 0);
    printf("Scenario 1: ft_bzero(str, 0) → no change\n");
	printf("String: %s\n", str);
    check(str[0] != 0);

	ft_bzero(str + 5, 5);
	printf("Scenario 2: ft_bzero(str + 5, 5) → 5 last char change to 0\n");
	printf("String: %s\n", str);

	ft_bzero(str, 10);
	printf("Scenario 3: ft_bzero(str, 10) → all chars change to 0 with 2 more in length\n");
	printf("String: %s\n", str);

	return 0;
}
