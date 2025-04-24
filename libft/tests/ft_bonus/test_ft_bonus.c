#include "../../ft_lstadd_back_bonus.c"
#include "../../ft_lstadd_front_bonus.c"
#include "../../ft_lstdelone_bonus.c"
#include "../../ft_lstclear_bonus.c"
#include "../../ft_lstiter_bonus.c"
#include "../../ft_lstlast_bonus.c"
#include "../../ft_lstmap_bonus.c"
#include "../../ft_lstnew_bonus.c"
#include "../../ft_lstsize_bonus.c"
#include "../../ft_strlen.c"
#include "../../ft_strdup.c"
#include "../libft_tests.h"

void print_list(t_list *lst)
{
	printf("List: ");
	while (lst)
	{
		printf("\"%s\" -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}
void *strdup_wrap(void *s) { return strdup((char *)s); }
void print_wrap(void *s) { printf("%s\n", (char *)s); }

// ======= Main Test Suite =======
int main(void)
{
	printf("\n===== Testing: ft_lstnew and ft_lstadd_front =====\n");

	// Create initial list
	t_list *head = ft_lstnew(strdup("1st"));
	check(head != NULL && strcmp(head->content, "1st") == 0);

	// Add to front
	t_list *n1 = ft_lstnew(strdup("New head"));
	ft_lstadd_front(&head, n1);
	check(strcmp((char *)head->content, "New head") == 0);

	// Add another front
	t_list *n2 = ft_lstnew(strdup("Another head"));
	ft_lstadd_front(&head, n2);
	check(strcmp((char *)head->content, "Another head") == 0);

	print_list(head);

	printf("\n===== Testing: ft_lstsize =====\n");
	// Test size
	printf("Total nodes expected: 3\n");
	check(ft_lstsize(head) == 3);

	printf("\n===== Testing: ft_lstlast =====\n");
	// Test last
	t_list *last = ft_lstlast(head);
	check(strcmp((char *)last->content, "1st") == 0);

	// Add to back
	printf("\n===== Testing: ft_lstadd_back =====\n");
	ft_lstadd_back(&head, ft_lstnew(strdup("Last!")));
	last = ft_lstlast(head);
	check(strcmp((char *)last->content, "Last!") == 0);
	check(ft_lstsize(head) == 4);

	// Delete one node
	printf("\n===== Testing: ft_lstdelone =====\n");
	t_list *temp = ft_lstnew(strdup("To be deleted"));
	printf("\nDeleting node with content: \"%s\"\n", (char *)temp->content);
	ft_lstdelone(temp, free);
	check(1); // No crash = pass

	// Clear the list
	printf("\n===== Testing: ft_lstclear =====\n");
	printf("\nClearing all nodes...\n");
	ft_lstclear(&head, free);
	check(head == NULL);

	// Map test
	printf("\n===== Testing: ft_lstmap =====\n");
	printf("\nMapping duplicated list...\n");
	t_list *orig = ft_lstnew(strdup("a"));
	ft_lstadd_back(&orig, ft_lstnew(strdup("b")));
	ft_lstadd_back(&orig, ft_lstnew(strdup("c")));
	t_list *mapped = ft_lstmap(orig, strdup_wrap, free);
	print_list(mapped);
	check(mapped && strcmp(mapped->content, "a") == 0);

	ft_lstclear(&orig, free);
	ft_lstclear(&mapped, free);

	printf("\n===== End of Tests =====\n");
	return 0;
}
