/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:21:41 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/04 12:38:44 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	unsigned int j;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	j = 0;
	while (s[j])
	{
		new[j] = (*f)(j, s[j]);
		j++;
	}
	return (new);
}

// char whatsupp(unsigned int i, char c)
// {
// 	if (!(i % 3))
// 		c = 'w';
// 	else 
// 		c = 'u';
// 	return (c);
// }

// int	main()
// {
// 	char *str = ft_strmapi("old house", whatsupp);
// 	puts(str);
// 	free(str);
// }