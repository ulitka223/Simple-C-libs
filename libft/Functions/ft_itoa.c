/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:26:51 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/08 14:44:09 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_s(int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	do
	{
		n /= 10;
		count++;
	}while (n > 0);
	count--;
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	count;
	char	*str;
	
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	count = count_s(n);
	str = ft_strnew(count);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[count] = n % 10 + '0';
		n /= 10;
		count--;
	}
	return (str);
}

// int	main(int argc, char **argv)
// {
// 	int i = ft_atoi(argv[1]);
// 	char *s = ft_itoa(i);
// 	puts(s);
// 	free(s);
// }