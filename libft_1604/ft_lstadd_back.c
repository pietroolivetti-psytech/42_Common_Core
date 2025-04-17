#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new; //1st elem list
		return ;
	}
	temp = *lst; //temporary pointer to the head of the list
	while (temp->next)
		temp = temp->next;
	temp->next = new;

}