/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:27:16 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/14 04:14:36 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	j;

	j = 0;
	if (s && f)
	{
		while (s[j])
		{
			(*f)(j, &s[j]);
			j++;
		}
	}
}

// void	some_func(unsigned int i, char *c)
// {
// 	if (!(i % 2))
// 		*c = tolower(*c);
// 	else
// 		printf ("schto?\n");
// }

// int	main()
// {
// 	char str[] = "HELLO";
// 	ft_striteri(str, some_func);
// 	puts(str);
// 	// free(str);
// }