#include "../libft_tests.h"
#include "../../ft_memchr.c"
void	*ft_memchr(const void *s, int c, size_t n);


int main()
{
    void *s1 = "Bla bla";
	char *s2 = "Ble ble";
	char s3[15] = "";
	printf("Scenario 1: ft_memchr(\"Bla bla\", 'a', 0) -> n = 0\n");
	check(ft_memchr(s1, 'a', 0) == memchr( s1, 'a', 0));

	printf("\nScenario 2: ft_memchr(\"\", 'a', 5) -> n != 0 but *s is empty\n");
	check(ft_memchr(s3, 'a', 5) == memchr( s3, 'a', 5));

	printf("\nScenario 3: ft_memchr(\"Ble ble\", 'a', 5) -> n != 0; *s valid but c is not present in *s\n");
	check(ft_memchr(s2, 'a', 5) == memchr( s2, 'a', 5));
	
	printf("\nScenario 4: ft_memchr(\"Ble ble\", 0, 5) -> n != 0; *s valid but c is NULL\n");
	check(ft_memchr(s2, 0, 5) == memchr(s2, 0, 5));

	printf("\nScenario 5: (ft_memchr(\"^~´**\", 'a', 5) - n != 0; *s valid but *s is non alphanum\n");
	check(ft_memchr("^~´**", 'a', 5) == memchr("^~´**", 'a', 5));
    return 0;
}


