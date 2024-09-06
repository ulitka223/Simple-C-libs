/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:08:00 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/04 12:19:53 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}

// char TOLOWER(char c)
// {
// 	c = ft_tolower(c);
// }

// int main()
// {
// 	char *b = ft_strmap("BOBROSS", TOLOWER);
// 	puts(b);
// 	free(b);	
// }