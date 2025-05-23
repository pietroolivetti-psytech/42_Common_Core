/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:01:54 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/22 19:55:00 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
	write (fd, "\n", 1);
}
