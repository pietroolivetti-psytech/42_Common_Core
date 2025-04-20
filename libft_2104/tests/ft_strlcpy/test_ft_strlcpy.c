#include "../../ft_strlcpy.c"
#include "../../ft_strlen.c"
#include "../libft_tests.h"

int	main(void)
{
	char src[] = "libft!";
	char dest[10];

	printf("\nScenario 1: size == 0, dest shouldn't change\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A');
	printf("DEST: %s\n", dest);

	printf("\nScenario 2: size == 1, only null terminator copied\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 && dest[1] == 'A');
	printf("DEST: %s\n", dest);

	printf("\nScenario 3: size == 2, only 1 char + null terminator\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'l' && dest[1] == 0 && dest[2] == 'A');
	printf("DEST: %s\n", dest);

	printf("\nScenario 4: size is large (-1 interpreted as large unsigned), full copy\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A');
	printf("DEST: %s\n", dest);

	printf("\nScenario 5: size == 6, copies 5 + null terminator\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) && dest[5] == 0);
	printf("DEST: %s\n", dest);

	printf("\nScenario 6: size == 7, copies full string with null terminator\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7));
	printf("DEST: %s\n", dest);

	printf("\nScenario 7: size == 8, same as 7 since string is shorter\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7));
	printf("DEST: %s\n", dest);

	printf("\nScenario 8: empty src string, size == 42\n");
	memset(dest, 0, 10);
	check(ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1));
	printf("DEST: %s\n", dest);

	printf("\nScenario 9: src = \"1\", size == 0\n");
	memset(dest, 'A', 10);
	check(ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 'A');
	printf("DEST: %s || len: %ld \n", dest, ft_strlcpy(dest, "1", 0));

	return 0;
}
