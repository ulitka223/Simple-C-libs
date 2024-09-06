/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 22:59:56 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/11 01:15:01 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdint.h>

int	count_l(unsigned long long a)
{
	int	count;

	count = 0;
	while (a > 0)
	{
		count++;
		a /= 16;
	}
	return (count + 1);		
}

int	ft_print_hex(unsigned long long a)
{
	char const *hex;
	char *s;
	int	i;
	int	len;

	if (a == 0)
	{
		ft_putchar('0');
		return (1);
	}
	hex = "0123456789abcdef";
	i = count_l(a) - 1;
	len = i;
	s = (char *)calloc(i + 1, sizeof(char));
	s[i] = '\0';
	i--;
	while (a > 0)
	{
		s[i] = hex[a % 16];
		i--;
		a /= 16;
	}
	ft_putstr(s);
	free(s);
	return (len);
}

int	upper_hex(unsigned long long a)
{
	char const *hex;
	char *s;
	int	i;
	int	len;

	if (a == 0)
	{
		ft_putchar('0');
		return (1);
	}
	hex = "0123456789ABCDEF";
	i = count_l(a) - 1;
	len = i;
	s = (char *)calloc(i + 1, sizeof(char));
	s[i] = '\0';
	i--;
	while (a > 0)
	{
		s[i] = hex[a % 16];
		i--;
		a /= 16;
	}
	ft_putstr(s);
	free(s);
	return (len);
}

int	ft_pointer(void *ptr)
{
	char *hex;
	uintptr_t b;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	b = (uintptr_t)ptr;
	ft_print_hex(b);
	return (count_l(b));
}

// int	main()
// {
// 	int f = 10;
// 	char *str = "Bobush";
// 	// ft_print_hex(f);
// 	ft_pointer(str);
// 	// ft_print_hex(101010123);
// 	putchar('\n');
// 	ft_printf("%p\n",str);
// 	printf("%p\n",str);
// }
//102578729144346
//0x58a2d3805019