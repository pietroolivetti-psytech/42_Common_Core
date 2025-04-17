#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	ct;
	t_list	*ptr;

	ct = 0;
	ptr = lst;
	while (ptr)
	{
		ct++;
		ptr = ptr->next;
	}
	return (ct);
}
