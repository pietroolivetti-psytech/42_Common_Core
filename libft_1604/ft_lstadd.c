/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:06:34 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:36 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds a new node to the beginning of a linked list:
** - Allocates memory for the new node using malloc().
** - Initializes the 'content' and 'content_size' of the new node
** with the provided values. If 'content' is NULL, 'content_size'
** is set to 0.
** - Sets the 'next' pointer of the new node to point to the current
** first node of the list.
** - Updates the pointer to the first node of the list ('*alst') to
** point to the newly added node.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	// Step 1: Check if the pointer to the new node ('new') is not NULL.
	//          If 'new' is NULL, there's nothing to add, so return.
	if (!new)
		return (NULL);
	// Step 2: Set the 'next' pointer of the new node to point to the
	//          current first node of the list (*alst). This makes the
	//          new node the new head of the list.
	new->next = *alst;
	// Step 3: Update the pointer to the first node of the list ('*alst')
	//          to now point to the newly created and linked node ('new').
	*alst = new;
}