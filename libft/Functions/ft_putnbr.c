/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:25:06 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/24 10:32:38 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if(n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * -1);
	}
	else if(n > 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else 
	{
		n = n +'0';
		write(1, &n, 1);
	}
}

// int	main()
// {
// 	ft_putnbr(2147483647);
// 	printf("\n");
// }