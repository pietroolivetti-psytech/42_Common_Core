#include "../../ft_substr.c"
#include "../../ft_calloc.c"
#include "../../ft_strlen.c"
#include "../../ft_strdup.c"
#include "../../ft_strlcpy.c"
#include "../libft_tests.h"

char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char *src);

int	main(void)
{
	printf("\nScenario 1: start < *s && start < len\n");
	char *s = ft_substr("Fluminense", 1, 1);
	check(!strcmp(s, "l")); printf("Size of length created: %ld\n", ft_strlen(s));
	free(s);

	printf("\nScenario 2: start > *s && start < len\n");
	s = ft_substr("flu", 4, 5);
	check(!strcmp(s, ""));
	printf("Size of length created: %ld\n", ft_strlen(s));
	free(s);

	printf("\nScenario 3: start < *s && size of string < len\n");
	s = ft_substr("flu", 0, 1200);
	check(!strcmp(s, "flu"));
	printf("Size of length created: %ld\n", ft_strlen(s));
	free(s);

	return 0;
}




/*	s = ft_substr("tripouille", 1, 1);
	check(!strcmp(s, "r"));
	 mcheck(s, 2); free(s); showLeaks();*/