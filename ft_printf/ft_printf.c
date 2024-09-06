/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:54:52 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/11 01:39:30 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int	len;
	int	i;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_parse(str[i], args);
		}	
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}

/*int	main()
{
	// int a = ft_printf("Hello blya%di an%d %svin%i\n", 42, 43, "BABAIKA", 100);
	// char *str = NULL;
	// ft_printf(str);
	// char *str = "sa";
	// int	k = 100;
	// printf("%p\n",&k);
	char *str = NULL;
	int i = printf("%u\n",-2147483645);
	int k = ft_printf("%u\n", 2147483649);
	printf("\n%d vs %d\n",i, k);
}
*/
// Hello blya42i an43 BABAIKAvin100

// Hello blyai an vin\n
