/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:26 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/22 19:16:23 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	from_set(const char *set, char c);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (*s1 == '\0' || end == 0)
		return (ft_strdup(""));
	while (from_set(set, s1[start]))
		start++;
	end--;
	while (end >= start && from_set(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	new = malloc(((end - start) + 2) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + start, (end - start) + 2);
	return (new);
}

static size_t	from_set(const char *set, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(set);
	while (i < len)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
