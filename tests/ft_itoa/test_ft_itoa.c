#include "../../ft_itoa.c"
#include "../libft_tests.h"

int main(void)
{
	char *res;

	// 1. Positive number
	printf("\n[1] Convert 42 to string\n");
	res = ft_itoa(42);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "42") == 0);
	free(res);

	// 2. Larger positive number
	printf("\n[2] Convert 123 to string\n");
	res = ft_itoa(123);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "123") == 0);
	free(res);

	// 3. Very large positive number
	printf("\n[3] Convert 9999 to string\n");
	res = ft_itoa(9999);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "9999") == 0);
	free(res);

	// 4. Negative number
	printf("\n[4] Convert -42 to string\n");
	res = ft_itoa(-42);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "-42") == 0);
	free(res);

	// 5. Larger negative number
	printf("\n[5] Convert -123 to string\n");
	res = ft_itoa(-123);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "-123") == 0);
	free(res);

	// 6. Very large negative number
	printf("\n[6] Convert -9999 to string\n");
	res = ft_itoa(-9999);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "-9999") == 0);
	free(res);

	// 7. Zero
	printf("\n[7] Convert 0 to string\n");
	res = ft_itoa(0);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "0") == 0);
	free(res);

	// 8. INT_MAX
	printf("\n[8] Convert INT_MAX (%d) to string\n", INT_MAX);
	res = ft_itoa(INT_MAX);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "2147483647") == 0);
	free(res);

	// 9. INT_MIN
	printf("\n[9] Convert INT_MIN (%d) to string\n", INT_MIN);
	res = ft_itoa(INT_MIN);
	printf("Result: \"%s\"\n", res);
	check(strcmp(res, "-2147483648") == 0);
	free(res);

	return 0;
}
