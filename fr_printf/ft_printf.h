/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pileonar <pileonar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:14:03 by pileonar          #+#    #+#             */
/*   Updated: 2025/04/30 12:25:02 by pileonar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		printf_char(int c);
int		printf_perc(void);
int		printf_str(char *str);
int		count_int(int n);
int		printf_putnbr(int n);
int		printf_unsigned(unsigned int un);
int		printf_uchar(unsigned int c);
int		printf_hexa(unsigned int n, char x);
int		printf_pointer(void *p);
int		printf_u_long_ptr(unsigned long p);

#endif
