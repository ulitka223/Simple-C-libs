/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:01:27 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/11 01:22:54 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse(char c, va_list args)
{	
	int	len;
	
	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if(c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len += ft_pointer(va_arg(args, void *));
	else if (c == 'x')
		len += ft_print_hex(va_arg(args, unsigned long long));
	else if (c == 'X')
		len += upper_hex(va_arg(args, unsigned long long));
	else if (c == 'U')
		len += ft_unsigned(va_arg(args, unsigned));
	return (len);
}