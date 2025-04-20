#include "../libft_tests.h"
#include "../../ft_strtrim.c"
#include "../../ft_strlen.c"
#include "../../ft_strdup.c"
#include "../../ft_strlcpy.c"
void	*ft_calloc(size_t count, size_t size);
char	*ft_strtrim(char const *s1, char const *set);

int main()
{
	printf("\nScenario 1: ft_strtrim(\"\", \"\") -> s1 && set empty ""\n");
	char *s = ft_strtrim("", "");
	check(!strcmp(s, ""));
	printf("%s\nlength: %ld\n", s, ft_strlen(s)); free(s);

	printf("\nScenario 2:  ft_strtrim(\"   xxxFluminense\", \" x\") -> s1 with no end to trim\n");
	s = ft_strtrim("   xxxFluminense", " x");
	check(!strcmp(s, "Fluminense"));
	printf("%s\nlength: %ld\n", s, ft_strlen(s)); free(s);

	printf("\nScenario 3: ft_strtrim(\"\", \"123\") -> s1 empty && set valid ""\n");
	s = ft_strtrim("", "123");
	check(!strcmp(s, ""));
	printf("%s\nlength: %ld\n", s, ft_strlen(s)); free(s);

	printf("\nScenario 4: s1 && set valid - only one char in the trimmed string ""\n");
	s = ft_strtrim("abcdba", "acb");
	check(!strcmp(s, "d"));
	printf("%s\nlength: %ld\n", s, ft_strlen(s)); free(s);

	printf("\nScenario 5: ft_strtrim(\"___\", \"_\")");
	s = ft_strtrim("___", "_");
	check(!strcmp(s, ""));
	printf("%s\nlength: %ld\n", s, ft_strlen(s)); free(s);
	return 0;
}