/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:11:53 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:13:11 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	s3 = malloc(sizeof(char) * len);
	if (!s3)
		return (NULL);
	while (i < len && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (i + j < len && s2[j])
	{
		s3[j + i] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}
