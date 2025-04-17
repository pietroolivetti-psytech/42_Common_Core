/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:45:44 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:30:01 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ts;
	size_t			i;

	ts = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return ((void *)ts);
	while (i < n)
	{
		if (ts[i] == (unsigned char)c)
			return ((void *)&ts[i]);
		i++;
	}
	return (NULL);
}
