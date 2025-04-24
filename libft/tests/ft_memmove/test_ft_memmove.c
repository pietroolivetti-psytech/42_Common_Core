#include "../../ft_memmove.c"
#include "../libft_tests.h"

int main(void)
{
    // Test 1 – Normal copy: Non-overlapping
    printf("\n[1] Scenario: Normal copy (non-overlapping)\n");
    char src1[] = "Hello, world!";
    char dest1[50];
    ft_memmove(dest1, src1, strlen(src1) + 1);
    printf("Source: \"%s\"\nDestination after memmove: \"%s\"\n", src1, dest1);
    check(strcmp(dest1, src1) == 0);

    // Test 2 – Overlapping copy: dest starts after src (backward copy)
    printf("\n[2] Scenario: Overlapping copy (dest > src) → backward safe copy\n");
    char overlap2[] = "123456789";
    ft_memmove(overlap2 + 2, overlap2, 5);
    printf("Result in overlap2: \"%s\" (expected: \"121234589\")\n", overlap2);
    check(strcmp(overlap2, "121234589") == 0);

    // Test 3 – Overlapping copy: dest starts before src (forward safe copy)
    printf("\n[3] Scenario: Overlapping copy (dest < src) → forward safe copy\n");
    char overlap3[] = "abcdef";
    ft_memmove(overlap3, overlap3 + 2, 4);
    printf("Result in overlap3: \"%s\" (expected: \"cdefef\")\n", overlap3);
    check(strcmp(overlap3, "cdefef") == 0);

    // Test 4 – Copy zero bytes
    printf("\n[4] Scenario: Copy 0 bytes\n");
    char dest4[] = "unchanged";
    char src4[] = "modified";
    ft_memmove(dest4, src4, 0);
    printf("Result: \"%s\" (expected: \"unchanged\")\n", dest4);
    check(strcmp(dest4, "unchanged") == 0);

    // Test 5 – Both dest and src are NULL with n = 0
    printf("\n[5] Scenario: NULL pointers with n = 0 (safe)\n");
    char *dest5 = NULL;
    char *src5 = NULL;
    void *result5 = ft_memmove(dest5, src5, 0);
    printf("Returned pointer is NULL? %s\n", result5 == NULL ? "Yes" : "No");
    check(result5 == NULL);

    // Test 6 – Very large buffer copy (stress test)
    printf("\n[6] Scenario: Large buffer copy (stress test)\n");
    size_t big_size = 1 << 20; // 1MB
    char *big_src = malloc(big_size);
    char *big_dest = malloc(big_size);
    memset(big_src, 'A', big_size);
    ft_memmove(big_dest, big_src, big_size);
    int passed = memcmp(big_src, big_dest, big_size) == 0;
    printf("First byte: %c | Last byte: %c | All bytes equal? %s\n",
        big_dest[0], big_dest[big_size - 1], passed ? "Yes" : "No");
    check(passed);
    free(big_src);
    free(big_dest);

    // Test 7 – Self copy (src == dest)
    printf("\n[7] Scenario: Self copy (src == dest)\n");
    char self[] = "duplicate";
    ft_memmove(self, self, strlen(self));
    printf("Result: \"%s\" (expected: \"duplicate\")\n", self);
    check(strcmp(self, "duplicate") == 0);

    // Test 8 – Partial overlapping from middle to start
    printf("\n[8] Scenario: Partial overlap from middle to start\n");
    char part[] = "123456";
    ft_memmove(part, part + 2, 4); // Move '3456' to start
    printf("Result: \"%s\" (expected: \"345656\")\n", part);
    check(strcmp(part, "345656") == 0);

    // Test 9 – Overlapping with byte-by-byte visible changes
    printf("\n[9] Scenario: Visual check for byte-wise correctness in overlap\n");
    char visual[] = "abcde";
    ft_memmove(visual + 1, visual, 4); // Copy 'abcd' to start at pos 1
    printf("Result: \"%s\" (expected: \"aabcd\")\n", visual);
    check(strcmp(visual, "aabcd") == 0);

    return 0;
}
