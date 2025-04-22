/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:55:15 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/17 13:57:23 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ct;
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
