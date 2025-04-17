/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:06:55 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 16:06:56 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_obj;
    
    if (!lst || !f || !del)
        return (NULL);
    new_list = NULL;
    /* loop over the existing list */
    while (lst)
    {
        /* create a new object with the content being the result
         * of the application of the function f on the current element's
         * content
         */
        new_obj = ft_lstnew(f(lst->content));
        if (!new_obj)
        {
            /* if the new object is null, clear the new list */
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        /* if there is a new object, add it to the back of the new list */
        ft_lstadd_back(&new_list, new_obj);
        lst = lst->next;
    }
    /* finally, we return the new list */
    return (new_list);
}