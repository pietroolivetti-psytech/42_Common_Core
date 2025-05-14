/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:14:15 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/30 16:27:18 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_uchar(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

int	printf_unsigned(unsigned int un)
{
	int				ct;
	unsigned int	nc;

	ct = 0;
	if (un > 9)
		ct += printf_unsigned(un / (unsigned int)10);
	nc = (un % (unsigned int)10) + (unsigned int)48;
	ct += printf_uchar(nc);
	return (ct);
}

int	printf_hexa(unsigned int n, char x)
{
	char	*basis;
	int		ct;
	int		hex_digit;

	ct = 0;
	if (x == 'x')
		basis = "0123456789abcdef";
	else
		basis = "0123456789ABCDEF";
	if (n >= 16)
		ct += printf_hexa(n / 16, x);
	hex_digit = n % 16;
	ct += 1;
	write(1, &basis[hex_digit], 1);
	return (ct);
}

int	printf_pointer(void *p)
{
	int	ct;

	ct = 0;
	if (p == 0)
		ct = write(1, "(nil)", 5);
	else
	{
		ct += write(1, "0x", 2);
		ct += printf_u_long_ptr((unsigned long)p);
	}
	return (ct);
}

int	printf_u_long_ptr(unsigned long p)
{
	int		ct;
	char	*basis;
	int		last_digit;

	basis = "0123456789abcdef";
	ct = 0;
	if (p >= 16)
		ct += printf_u_long_ptr(p / 16);
	last_digit = p % 16;
	ct += write(1, &basis[last_digit], 1);
	return (ct);
}
