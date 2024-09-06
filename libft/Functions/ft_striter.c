/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:59:31 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 15:59:45 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;
	
	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}

// void	tolower_wrapper(char *c)
// {
//     *c = tolower(*c);
// }

// int	main()
// {
// 	char *str = strdup("HELLO");
// 	ft_striter(str, tolower_wrapper);
// 	puts(str);
// 	free(str);
// }