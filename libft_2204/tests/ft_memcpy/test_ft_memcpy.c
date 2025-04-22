#include "../../ft_memcpy.c"
#include "../libft_tests.h"


int main(void)
{
    char dest[100];
    memset(dest, 'X', 100);

    // 1. Copy 0 bytes – destination should remain unchanged
    printf("\n[1] Scenario: Copy 0 bytes from \"hello\" into dest filled with 'X'\n");
    ft_memcpy(dest, "hello", 0);
    printf("First char in dest: '%c' (expected 'X')\n", dest[0]);
    check(dest[0] == 'X');

    // 2. Copy 0 bytes from NULL source – should return dest unchanged
    printf("\n[2] Scenario: Copy 0 bytes from NULL source into dest (safe because n = 0)\n");
    char *rtn = (char *)ft_memcpy(dest, NULL, 0);
    printf("Returned pointer is dest? %s | dest[0]: '%c' (expected 'X')\n", rtn == dest ? "Yes" : "No", dest[0]);
    check(rtn == dest && dest[0] == 'X');

    // 3. Copy two bytes (including null terminator)
    printf("\n[3] Scenario: Copy two bytes from a small array {0, 0} into dest\n");
    char src[] = {0, 0};
    ft_memcpy(dest, src, 2);
    printf("dest[0] = %d, dest[1] = %d (expected 0, 0)\n", dest[0], dest[1]);
    check(dest[0] == 0 && dest[1] == 0);

    // 4. Copy full word with special chars
    printf("\n[4] Scenario: Copy word with non-ASCII chars \"µ@!\" into dest\n");
    char special[] = "µ@!";
    ft_memcpy(dest, special, strlen(special) + 1);
    printf("Copied string: \"%s\" (expected \"µ@!\")\n", dest);
    check(strcmp(dest, "µ@!") == 0);

    // 5. Copy 1 byte from source to dest
    printf("\n[5] Scenario: Copy 1 byte from source \"Z\" into dest\n");
    char oneChar[] = "Z";
    ft_memcpy(dest, oneChar, 1);
    printf("dest[0]: '%c' (expected 'Z')\n", dest[0]);
    check(dest[0] == 'Z');

    // 6. Copy entire sentence
    printf("\n[6] Scenario: Copy full sentence \"Test sentence.\" into dest\n");
    const char *sentence = "Test sentence.";
    ft_memcpy(dest, sentence, strlen(sentence) + 1);
    printf("Copied sentence: \"%s\"\n", dest);
    check(strcmp(dest, "Test sentence.") == 0);

    // 7. Copy from one part of the buffer to another (overlapping = undefined)
    printf("\n[7] Scenario: Copy overlapping regions in the same buffer (undefined behavior)\n");
    strcpy(dest, "abcdefghij");
    ft_memcpy(dest + 2, dest, 5); // Undefined behavior, still testable
    printf("After copy: \"%s\"\n", dest);

    // 8. Copy exactly 0 bytes from a long string
    printf("\n[8] Scenario: Copy 0 bytes from long string into dest – should stay unchanged\n");
    memset(dest, 'Q', 10);
    ft_memcpy(dest, "long text here", 0);
    printf("dest[0] after zero-byte copy: '%c' (expected 'Q')\n", dest[0]);
    check(dest[0] == 'Q');

    // 9. Copy entire int array as bytes
    printf("\n[9] Scenario: Copy int array as raw memory into destination buffer\n");
    int numbers[] = {42, 1337};
    int intDest[2] = {0};
    ft_memcpy(intDest, numbers, sizeof(numbers));
    printf("intDest[0] = %d, intDest[1] = %d (expected 42, 1337)\n", intDest[0], intDest[1]);
    check(intDest[0] == 42 && intDest[1] == 1337);

    return 0;
}
