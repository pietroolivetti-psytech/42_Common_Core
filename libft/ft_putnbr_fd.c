/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:02:06 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/22 19:55:03 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nc;
	long	nn;

	nn = n;
	if (nn < 0)
	{
		ft_putchar_fd ('-', fd);
		nn *= -1;
	}
	if (nn > 9)
		ft_putnbr_fd(nn / 10, fd);
	nc = (nn % 10) + 48;
	ft_putchar_fd(nc, fd);
}
