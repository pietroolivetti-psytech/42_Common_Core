#include "../libft_tests.h"
#include "../../ft_putnbr_fd.c"
#include "../../ft_putchar_fd.c"

static void run_putnbr_test(int n, const char *expected, int test_num)
{
	char buffer[100] = {0};
	int fd = open("tmp_putnbr.txt", O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("open failed");
		return;
	}

	// Write number to file
	ft_putnbr_fd(n, fd);
	lseek(fd, 0, SEEK_SET);
	read(fd, buffer, 99);
	close(fd);

	printf("\n[%d] Testing ft_putnbr_fd(%d)\n", test_num, n);
	printf("Expected: \"%s\"\n", expected);
	printf("Actual:   \"%s\"\n", buffer);
	check(strcmp(buffer, expected) == 0);
}

int main(void)
{
	// 1. Positive number
	run_putnbr_test(12345, "12345", 1);

	// 2. Negative number
	run_putnbr_test(-6789, "-6789", 2);

	// 3. Zero
	run_putnbr_test(0, "0", 3);

	// 4. Single digit
	run_putnbr_test(7, "7", 4);

	// 5. Single negative digit
	run_putnbr_test(-4, "-4", 5);

	// 6. Maximum int (to ensure no overflow)
	run_putnbr_test(2147483647, "2147483647", 6);

	// 7. Minimum int (requires long to avoid overflow)
	run_putnbr_test(-2147483648, "-2147483648", 7);

	// 8. Leading zeroes test (simulated by number 1000)
	run_putnbr_test(1000, "1000", 8);

	// 9. Negative round number
	run_putnbr_test(-1000, "-1000", 9);

	// 10. Large value near upper bound
	run_putnbr_test(2000000000, "2000000000", 10);

	return 0;
}
