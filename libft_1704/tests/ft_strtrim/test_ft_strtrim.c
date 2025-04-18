#include "../libft_tests.h"
#include "../../ft_strtrim.c"
#include "../../ft_strlen.c"
#include "../../ft_strdup.c"

char	*ft_strtrim(char const *s1, char const *set);

int main()
{
    void *s = "sdfafsfddThis is a testfdsfadsfdafsdaf";
	char *set = "asdf";
	//void *s3 = "";
	printf("Scenario 1: n = 0\n");
	check(ft_strtrim(s, set) == ft_strtrim(s, set));

	return 0;
}