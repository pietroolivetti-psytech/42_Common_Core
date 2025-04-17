/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:18:26 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:19:39 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	from_set(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*new;

	i = 0;
	j = ft_strlen(s1) - 1;
	x = 0;
	while (from_set(set, s1[i]))
		i++;
	while (from_set(set, s1[j]))
		j--;
	if (ft_strlen(s1) == 0 || i > j)
		return (ft_strdup(""));
	new = ft_calloc(((j - i) + 2), sizeof(char));
	if (!new)
		return (NULL);
	while ((x + i) < j + 1)
	{
		new[x] = s1[i + x];
		x++;
	}
	new[x] = '\0';
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
