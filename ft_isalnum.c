#include "libft.h"

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    return (ft_isalpha(c) != 0 || ft_isdigit(c) != 0);
}
