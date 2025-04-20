/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:20:00 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/18 19:33:11 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_str;
	char	*s2;

	if (s == NULL)
		return (NULL);
	i = 0;
	len_str = ft_strlen(s);
	if (start >= len_str)
		return (ft_calloc(1, sizeof(char)));
	if ((len_str - start) < len)
		len = len_str - start;
	s2 = ft_calloc(len + 1, sizeof(char));
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
