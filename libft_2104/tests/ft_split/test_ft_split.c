#include "../libft_tests.h"
#include "../../ft_split.c"
#include "../../ft_strlen.c"
#include "../../ft_strlcpy.c"

int main()
{
	size_t i = 0;
	char **tab = ft_split("  tripouille  42  ", ' ');
	while(tab[i])
	{
		printf("tab[%ld] = %s\n", i, tab[i]);
		i++;
	}
}