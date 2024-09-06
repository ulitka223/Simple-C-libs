/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:16:21 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/11 01:21:59 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsigned(unsigned n)
{	
	char	c;

	if (n > 10)
	{
		ft_unsigned(n / 10);
		ft_unsigned(n % 10);
	}
	else 
	{
		ft_putchar(n - '0');
	}
	return (count_l(n));
}