/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:20:00 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:21:02 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = ft_calloc((len + 1), sizeof(char));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		if (!s[start])
			return (s2);
		s2[i++] = s[start++];
	}
	return (s2);
}
