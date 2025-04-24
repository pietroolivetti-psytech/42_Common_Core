/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:03:45 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/22 16:26:20 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_malloc_creation_incorrect(char **av,
	size_t array_pos, size_t len)
{
	size_t	i;

	i = 0;
	av[array_pos] = malloc((len + 1) * sizeof(char));
	if (av[array_pos] == NULL)
	{
		while (i < array_pos)
			free(av[i++]);
		free(av);
		return (1);
	}
	return (0);
}

static int	av_creation_confirmation(char **av, const char *s, char d)
{
	size_t	i;
	size_t	len_word;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		len_word = 0;
		while (s[i] == d && s[i])
			i++;
		while (s[i] != d && s[i])
		{
			i++;
			len_word++;
		}
		if (len_word)
		{
			if (is_malloc_creation_incorrect(av, j, len_word))
				return (0);
			ft_strlcpy(av[j], &s[i - len_word], len_word + 1);
			j++;
		}
	}
	return (1);
}

static size_t	count_argv(const char *av, char d)
{
	size_t	ct;
	char	*pt;

	ct = 0;
	pt = (char *)av;
	while (*pt && *pt == d)
		pt++;
	while (*pt)
	{
		if (*pt != d && (*(pt + 1) == d || *(pt + 1) == '\0'))
			ct++;
		pt++;
	}
	return (ct);
}

char	**ft_split(const char *s, char c)
{
	size_t	ac;
	char	**av;

	if (s == NULL)
		return (NULL);
	ac = count_argv(s, c);
	av = malloc((ac + 1) * sizeof(char *));
	if (!av)
		return (NULL);
	av[ac] = NULL;
	if (av_creation_confirmation(av, s, c))
		return (av);
	else
		return (NULL);
}
