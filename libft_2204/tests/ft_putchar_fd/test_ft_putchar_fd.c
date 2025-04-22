#include "../libft_tests.h"
#include "../../ft_putchar_fd.c"

int main(void)
{
    // Test 1 – Write a visible character to standard output
    printf("\n[1] Writing 'A' to STDOUT:\nExpected output: A \nActual output: \n");
    ft_putchar_fd('A', STDOUT_FILENO);
    printf("\n");

    // Test 2 – Write a newline character to standard output
    printf("\n[2] Writing newline to STDOUT:\nExpected output: (new line below)\nActual output:");
    ft_putchar_fd('\n', STDOUT_FILENO);

    // Test 3 – Write a non-printable ASCII character
    printf("\n[3] Writing non-printable ASCII (BEL \\a = \\007):\nExpected: [may beep or be invisible]\n");
    ft_putchar_fd('\a', STDOUT_FILENO);


    // Test 4 – Edge case: null character
    printf("\n[4] Writing null character '\\0' to STDOUT (invisible):\n");
    ft_putchar_fd('\0', STDOUT_FILENO);
    printf(" (If no error, test passed)\n");

    return 0;
}
