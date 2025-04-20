/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:44:58 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:38:58 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ts;
	size_t			i;

	ts = (unsigned char *)s;
	i = 0;
	if (len == 0)
		return ;
	while (i < len)
	{
		ts[i] = 0;
		i++;
	}
}
