/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:06:46 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:47 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Frees a single list node:
** - Uses the provided 'del' function to free the content of the node.
** - Frees the node itself using free().
** - Sets the pointer to the node (in the caller) to NULL.
** - Must NOT touch the 'next' node.
*/

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	// Step 1: Check if alst and *alst are not NULL.
	//         If either is NULL, do nothing and return.
	if (lst == NULL)
		return ;
	// Step 2: Use the 'del' function to free the content inside the node.
	//         Pass in the content and content_size.
	del(lst->content);
	// Step 3: Free the node itself using free().
	free(lst);
}
