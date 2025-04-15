/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:45:53 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:29:12 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == c)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			((unsigned char *)dest)[i + 1] = '\0';
			return (dest);
		}
		else
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	((unsigned char *)dest)[i + 1] = '\0';
	return (dest);
}
