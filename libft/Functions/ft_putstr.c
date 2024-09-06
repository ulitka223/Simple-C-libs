/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 06:33:44 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/24 10:20:03 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

// int	main()
// {
// 	char const *s = "That's what she said";
// 	ft_putstr(s);
// }