/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:26 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/19 15:55:56 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	from_set(const char *set, char c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

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
/*	while ((cpy_char + start) < end + 1)
	{
			new[cpy_char] = s1[start + cpy_char];
			cpy_char++;
	}
	new[cpy_char] = '\0';*/

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

/*char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (NULL == s1 || NULL == set)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (*(s1 + start) && ft_strchr(set, *(s1 + start)))
		++start;
	while (end >= 0 && ft_strchr(set, *(s1 + end)))
		--end;
	if (start > end)
		return (ft_strdup(""));
	trimmed = malloc((end - start) + 2);
	if (NULL == trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, (end - start) + 2);
	return (trimmed);
}*/