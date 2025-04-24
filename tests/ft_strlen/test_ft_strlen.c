#include "../libft_tests.h"
#include "../../ft_strlen.c"

int main(void)
{
	printf("Scenario 1: ft_strlen(\"0123456789\") == strlen(\"0123456789\") \n");
	printf("Length = %ld \nComparing with the original function: ", ft_strlen("0123456789"));
    check(ft_strlen("0123456789") == strlen("0123456789"));

	printf("\nScenario 2: ft_strlen(\"\") == strlen(\"\") \n");
	printf("Length = %ld \nComparing with the original function: ", ft_strlen(""));
    check(ft_strlen("") == strlen(""));
}