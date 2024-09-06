/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 15:52:19 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/05 16:07:45 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*new;
	char	*d;
	
	new = ft_strnew(len);
	d = new;
	if (!new)
		return (NULL);
	while (len != 0)
	{
		*d = s1[start];
		d++;
		start++;
		len--;
	}
	return (new);
}

// int main()
// {
// 	char str[] = "Hello Bob Ross";
// 	char *b = ft_strsub(str, 6, 8);
// 	puts(b);
// }