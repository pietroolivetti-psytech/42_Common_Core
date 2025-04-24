#include "../libft_tests.h"
#include "../../ft_memcmp.c"
#include "../../ft_strlen.c"

int main(void)
{
    // CHAR TESTS
    char s[]    = {-42, 0, 21, 127};
    char sCpy[] = {-42, 0, 21, 127};
    char s2[]   = {0, 0, 127, 0};
    char s3[]   = {0, 0, 42, 0};

    printf("\n[1] Compare two identical char arrays (4 bytes)\n");
    int r1 = ft_memcmp(s, sCpy, 4);
    printf("memcmp result: %d (expected 0)\n", r1);
    check(r1 == 0);

    printf("\n[2] Compare same char arrays with 0 bytes (should always be 0)\n");
    int r2 = ft_memcmp(s, s2, 0);
    printf("memcmp result: %d (expected 0)\n", r2);
    check(r2 == 0);

	printf("\n[3] Compare first byte of s and s2 (-42 vs 0 → actually 214 - 0)\n");
	printf("*negative int, when cast to unsigned char, go through the operation: 256 + (-42) = 214 \n*256 total possible combinations in 8-bits\n");
	int r3 = ft_memcmp(s, s2, 1);
	printf("memcmp result: %d (expected > 0)\n", r3);
	check(r3 > 0);
	
	printf("\n[4] Compare first byte of s2 and s (0 vs -42 → actually 0 - 214)\n");
	printf("*negative int, when cast to unsigned char, go through the operation: 256 + (-42) = 214 \n*256 total possible combinations in 8-bits\n");
	int r4 = ft_memcmp(s2, s, 1);
	printf("memcmp result: %d (expected < 0)\n", r4);
	check(r4 < 0);
	

    printf("\n[5] Compare full char arrays s2 and s3 (difference at index 2: 127 vs 42)\n");
    int r5 = ft_memcmp(s2, s3, 4);
    printf("memcmp result: %d (expected > 0)\n", r5);
    check(r5 > 0);

    // INT TESTS
    int ints2[] = {0, 0, 420, 0};
    int ints3[] = {0, 0, 42, 0};

    printf("\n[6] Compare full int arrays (3rd element differs: 420 vs 42)\n");
    int r6 = ft_memcmp(ints2, ints3, 4 * sizeof(int));
    printf("memcmp result: %d (expected > 0)\n", r6);
    check(r6 > 0);

    printf("\n[7] Compare only first int (both 0)\n");
    int r7 = ft_memcmp(ints2, ints3, 1 * sizeof(int));
    printf("memcmp result: %d (expected 0)\n", r7);
    check(r7 == 0);

    printf("\n[8] Compare first two ints (both are 0, should be equal)\n");
    int r8 = ft_memcmp(ints2, ints3, 2 * sizeof(int));
    printf("memcmp result: %d (expected 0)\n", r8);
    check(r8 == 0);

    printf("\n[9] Compare zero bytes of int arrays (always returns 0)\n");
    int r9 = ft_memcmp(ints2, ints3, 0);
    printf("memcmp result: %d (expected 0)\n", r9);
    check(r9 == 0);

    return 0;
}
