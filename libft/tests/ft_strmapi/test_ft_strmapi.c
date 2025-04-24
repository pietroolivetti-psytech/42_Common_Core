#include "../../ft_strmapi.c"
#include "../../ft_strlen.c"
#include "../libft_tests.h"
#include "../../ft_putchar_fd.c"

static char to_upper_even(unsigned int i, char c) {
	return (i % 2 == 0 && islower(c)) ? toupper(c) : c;
}
static char decrypter(unsigned int i, char c)
{
	(void)i;

	if(c >= 97 && c <= 109)
		return (c + 13);
	if(c >= 110 && c <= 122)
		return (c - 13);
	if(c >= 65 && c <= 77)
		return (c + 13);
	if(c >= 78 && c <= 90)
		return (c - 13);
	return (c);
}

static char shift_by_index(unsigned int i, char c) {
	if (isalpha(c))
		return c + i;
	return c;
}

int main()
{
	printf("\n[0] Decryption Rot-13 string\n");
	char *crypt = ft_strmapi("Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag.", decrypter);
	printf("Original str: Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag.\n");
	printf("Decrypted str: %s\n", crypt);
	check(strcmp(crypt, "Each project in the 42 common Core contains an encoded hint."));

		// 1. Even-position uppercase
	printf("\n[1] Convert lowercase chars to UPPERCASE at even indices\n");
	char *result1 = ft_strmapi("abcdef", to_upper_even);
	printf("Result: \"%s\" (expected \"AbCdEf\")\n", result1);
	check(strcmp(result1, "AbCdEf") == 0);
	free(result1);

	// 2. Empty string
	printf("\n[2] Handle empty string input\n");
	char *result2 = ft_strmapi("", to_upper_even);
	printf("Result: \"%s\" (expected \"\")\n", result2);
	check(strcmp(result2, "") == 0);
	free(result2);

	// 3. Shift by index
	printf("\n[3] Shift characters by their index value\n");
	char *result3 = ft_strmapi("abcd", shift_by_index); // 'a'+0, 'b'+1, 'c'+2, 'd'+3 → a, c, e, g
	printf("Result: \"%s\" (expected \"aceg\")\n", result3);
	check(strcmp(result3, "aceg") == 0);
	free(result3);

	return (0);
}
