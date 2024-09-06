/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:43:55 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/04 12:41:41 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	Dlen;
	size_t	Slen;
	size_t	i;
	size_t	j;

	Slen = ft_strlen(src);
	Dlen = ft_strlen(dest);
	if (size < Dlen + 1)
		return (Slen + size);
	while (dest[j] != '\0' && j < size - 1)
	{
		j++;
	}
	while (src[i] && j < size - 1 && i < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (Dlen + Slen);
}

// int	main(int argc, char **argv)
// {
// 	char dest[] = "He";
// 	char src[] = "AndWho";
// 	size_t d = ft_strlcat(dest,src, 7);
// 	puts(dest);	
// 	printf("%zu\n",d);
// }