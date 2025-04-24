#include "../libft_tests.h"
#include "../../ft_memset.c"

int main(void)
{
	char str1[10];
	char str2[10];

	ft_memset(str1, '7', 10);
	memset(str2, '7', 10);
    printf("Scenario 1: ft_memset(str1, '7', 10) → no change\n");
	printf("String ft: %s || string original: %s\n", str1, str2);
    check(str1[0] == str2[7]);

	/*ft_bzero(str + 5, 5);
	printf("Scenario 2: ft_bzero(str + 5, 5) → 5 last char change to 0\n");
	printf("String: %s\n", str);

	ft_bzero(str, 10);
	printf("Scenario 3: ft_bzero(str, 10) → all chars change to 0 with 2 more in length\n");
	printf("String: %s\n", str);*/

	return 0;
}