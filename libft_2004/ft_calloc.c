/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:55:43 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 14:57:37 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*new;
	size_t			i;

	i = 0;
	new = malloc((size * count));
	if (!new)
		return (NULL);
	while (i < (size * count))
	{
		new[i] = 0;
		i++;
	}
	return ((void *)new);
}
