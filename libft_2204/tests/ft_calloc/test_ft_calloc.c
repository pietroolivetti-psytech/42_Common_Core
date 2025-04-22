#include "../../ft_calloc.c"
#include "../libft_tests.h"

int	main(void)
{
	void *p;

	printf("\nScenario 4: calloc(INT_MAX, INT_MAX) -> Should return NULL (overflow)\n");
	p = ft_calloc(INT_MAX, INT_MAX);
	check(p == NULL);
	printf("Returned pointer: %p\n", p);

	printf("\nScenario 5: calloc(INT_MIN, INT_MIN) -> Should return NULL (invalid/overflow)\n");
	p = ft_calloc(INT_MIN, INT_MIN);
	check(p == NULL);
	printf("Returned pointer: %p\n", p);

	printf("\nScenario 6: calloc(0, 0) -> Should return non-NULL (valid edge case)\n");
	p = ft_calloc(0, 0);
	check(p != NULL);
	printf("Returned pointer: %p\n", p);
	free(p);

	printf("\nScenario 7: calloc(0, 5) -> Should return non-NULL (zero count)\n");
	p = ft_calloc(0, 5);
	check(p != NULL);
	printf("Returned pointer: %p\n", p);
	free(p);

	printf("\nScenario 8: calloc(5, 0) -> Should return non-NULL (zero size)\n");
	p = ft_calloc(5, 0);
	check(p != NULL);
	printf("Returned pointer: %p\n", p);
	free(p);

	printf("\nScenario 9: calloc(0, -5) -> Should return non-NULL (treated as 0 bytes)\n");
	p = ft_calloc(0, -5);
	check(p != NULL);
	printf("Returned pointer: %p\n", p);
	free(p);

	printf("\nScenario 10: calloc(-5, 0) -> Should return non-NULL (treated as 0 bytes)\n");
	p = ft_calloc(-5, 0);
	check(p != NULL);
	printf("Returned pointer: %p\n", p);
	free(p);

	printf("\nScenario 11: calloc(3, -5) -> Should return NULL (overflow)\n");
	p = ft_calloc(3, -5);
	check(p == NULL);
	printf("Returned pointer: %p\n", p);

	printf("\nScenario 12: calloc(-5, 3) -> Should return NULL (overflow)\n");
	p = ft_calloc(-5, 3);
	check(p == NULL);
	printf("Returned pointer: %p\n", p);

	return 0;
}
