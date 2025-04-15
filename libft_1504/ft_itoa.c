/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:57:47 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:24 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_int(int n)
{
	long	nn;
	size_t	ct;

	nn = n;
	ct = 0;
	if (nn < 0)
	{
		nn *= -1;
		ct++;
	}
	while (nn > 9)
	{
		nn /= 10;
		ct++;
	}
	if (nn >= 0 && nn <= 9)
		ct++;
	return (ct);
}

char	*ft_itoa(int n)
{
	size_t	i;
	long	long_n;
	char	*nb;

	long_n = n;
	i = count_int(n);
	nb = malloc(sizeof(char) * count_int(n) + 1);
	if (!nb)
		return (NULL);
	if (long_n < 0)
	{
		nb[i - i] = '-';
		long_n *= -1;
	}
	nb[i] = '\0';
	if (long_n == 0)
		nb[--i] = (long_n % 10) + 48;
	while (long_n > 0)
	{
		nb[--i] = (long_n % 10) + 48;
		long_n /= 10;
	}
	return (nb);
}
