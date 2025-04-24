#include "../../ft_striteri.c"
#include "../../ft_strlen.c"
#include "../../ft_toupper.c"
#include "../libft_tests.h"

void uppercase_alternate(unsigned int i, char *c) {
	if (i % 2 == 0 && islower(*c))
		*c = toupper(*c);
}

void test_uppercase_alternate() {
	char str[] = "hello world";
	printf("\n[1] Scenario: Uppercase every other character in \"%s\"\n", str);
	ft_striteri(str, uppercase_alternate);
	printf("Modified string: \"%s\" (expected: \"HeLlO WoRlD\")\n", str);
	check(strcmp(str, "HeLlO WoRlD") == 0);
}

void asterisk_even(unsigned int i, char *c) {
	if (i % 2 == 0)
		*c = '*';
}

void test_asterisk_even() {
	char str[] = "abcdef";
	printf("\n[2] Scenario: Replace characters at even indices in \"%s\" with '*'\n", str);
	ft_striteri(str, asterisk_even);
	printf("Modified string: \"%s\" (expected: \"*b*d*f\")\n", str);
	check(strcmp(str, "*b*d*f") == 0);
}


int main()
{
	test_uppercase_alternate();
	test_asterisk_even();
	return 0;
}