#include "../../ft_strjoin.c"
#include "../../ft_strlen.c"
#include "../libft_tests.h"


int main(void)
{
	char *s;

	// Test 1 – Join two normal strings
	printf("\n[1] Joining \"fluminense\" and \"42\"\n");
	s = ft_strjoin("fluminense", "42");
	printf("Result: \"%s\"\n", s);
	check(!strcmp(s, "fluminense42"));
	free(s);

	// Test 2 – Join empty string with non-empty
	printf("\n[2] Joining \"\" and \"42\"\n");
	s = ft_strjoin("", "42");
	printf("Result: \"%s\"\n", s);
	check(!strcmp(s, "42"));
	free(s);

	// Test 3 – Join non-empty string with empty
	printf("\n[3] Joining \"42\" and \"\"\n");
	s = ft_strjoin("42", "");
	printf("Result: \"%s\"\n", s);
	check(!strcmp(s, "42"));
	free(s);

	// Test 4 – Join two empty strings
	printf("\n[4] Joining \"\" and \"\"\n");
	s = ft_strjoin("", "");
	printf("Result: \"%s\"\n", s);
	check(!strcmp(s, ""));
	free(s);

	return 0;
}
