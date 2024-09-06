/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:08:27 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/24 10:14:21 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13 || (str[i] == 32))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if(str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

// int	main()
// {
// 	char *str = "   	-123Asc23";
// 	int i = ft_atoi(str);
// 	printf("%d\n", i);
// }