#include "../libft_tests.h"
#include "../../ft_putstr_fd.c"
#include "../../ft_putchar_fd.c"

int main(void)
{
    // Test 1 – Normal string to STDOUT
    printf("\n[1] Writing 'Hello, world!' to STDOUT:\nExpected: Hello, world!\nActual: ");
    ft_putstr_fd("Hello, world!", 1);
    printf("\n");

    // Test 2 – Empty string
    printf("\n[2] Writing empty string to STDOUT:\nExpected: (nothing)\nActual: ");
    ft_putstr_fd("", 1);
    printf("\n");

    // Test 3 – String with newline and tabs
    printf("\n[3] Writing string with newline and tabs:\nExpected:\n\tTabbed\nNewlined\nActual:\n");
    ft_putstr_fd("\tTabbed\nNewlined", 1);
    printf("\n");
}