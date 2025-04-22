#include "../libft_tests.h"
#include "../../ft_strlcat.c"
#include "../../ft_strlen.c"

int main()
{
	char *s = "Porto";
	char d[10] = "I love";
	size_t size_dest = 10;
	size_t original_size_sum = (ft_strlen(d) + ft_strlen(s));

	size_t buf = ft_strlcat(d, s, size_dest);
	printf("\n[0] Scenario: missing 2 bytes for all chars\n");
	printf("Buffer size needed: %ld\nConcat sentence: %s -> %ld", buf, d, ft_strlen(d));
	check(buf == original_size_sum);

	char s1[] = "Porto";
    char d1[20] = "";
    printf("\n[1] Scenario: Concatenating into an empty buffer\n");
    size_t r1 = ft_strlcat(d1, s1, 20);
    printf("Result: \"%s\" → %ld\n", d1, r1);
    check(r1 == strlen(s1));

    // Test 2 – Normal concatenation with space left
    char s2[] = "Porto";
    char d2[20] = "I love ";
    printf("\n[2] Scenario: Normal concatenation with space left\n");
    size_t r2 = ft_strlcat(d2, s2, 20);
    printf("Result: \"%s\" → %ld\n", d2, r2);
    check(r2 == strlen("I love ") + strlen("Porto"));

    // Test 3 – Exact fit (concatenation + null terminator)
    char s3[] = "City";
    char d3[10] = "My ";
    printf("\n[3] Scenario: Destination buffer fits the full concatenation\n");
    size_t r3 = ft_strlcat(d3, s3, 10);
    printf("Result: \"%s\" → %ld\n", d3, r3);
    check(r3 == strlen("My ") + strlen("City"));

    // Test 4 – Not enough space, truncation occurs
    char s4[] = "Lisbon";
    char d4[8] = "Wow ";
    printf("\n[4] Scenario: Buffer too small to fit all characters\n");
    size_t r4 = ft_strlcat(d4, s4, 8);
    printf("Result: \"%s\" → %ld\n", d4, r4);
    check(r4 == strlen("Wow ") + strlen("Lisbon"));

    // Test 5 – Zero size buffer, nothing should be copied
    char s5[] = "Hello";
    char d5[5] = "Yo";
    printf("\n[5] Scenario: Zero-size destination buffer\n");
    size_t r5 = ft_strlcat(d5, s5, 0);
    printf("Result: \"%s\" → %ld\n", d5, r5);
    check(r5 == strlen(s5));

    // Test 6 – Provided size is less than destination length
    char s6[] = "abc";
    char d6[10] = "XYZ";
    printf("\n[6] Scenario: Provided size is less than existing destination string\n");
    size_t r6 = ft_strlcat(d6, s6, 2);
    printf("Result: \"%s\" → %ld\n", d6, r6);
	printf("%ld meaning the memory needed to concat %s on destination if it had size 2 would be %ld\n", r6, d6, r6);
    check(r6 == 2 + strlen(s6));  // Size + src len

    // Test 7 – Empty source, destination should remain the same
    char s7[] = "";
    char d7[10] = "End";
    printf("\n[7] Scenario: Appending empty source string\n");
    size_t r7 = ft_strlcat(d7, s7, 10);
    printf("Result: \"%s\" → %ld\n", d7, r7);
    check(r7 == strlen("End"));

    // Test 8 – Empty destination, should copy full source if fits
    char s8[] = "Home";
    char d8[10] = "";
    printf("\n[8] Scenario: Destination starts empty, full source should copy\n");
    size_t r8 = ft_strlcat(d8, s8, 5);
    printf("Result: \"%s\" → %ld\n", d8, r8);
    check(r8 == strlen(s8));

    // Test 9 – Large buffer, no truncation expected
    char *s9 = strdup("testing");
    char *d9 = calloc(50, sizeof(char));
    strcpy(d9, "FT ");
    printf("\n[9] Scenario: Large buffer, plenty of space for full concat\n");
    size_t r9 = ft_strlcat(d9, s9, 50);
    printf("Result: \"%s\" → %ld\n", d9, r9);
    check(r9 == strlen("FT ") + strlen("testing"));
    free(s9);
    free(d9);
	
}