/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:45:34 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:34:43 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tdest;
	unsigned char	*tsrc;
	size_t			i;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned char *)src;
	i = 0;
	if (!tdest && !tsrc)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			tdest[n] = tsrc[n];
	}
	else
	{
		while (i < n)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (dest);
}
