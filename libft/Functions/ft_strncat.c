/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:14:59 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/24 09:21:23 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = 0;
	while(src[j] != '\0' && j < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	while(i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);	
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	printf("%s\n", ft_strncat(argv[1], argv[2], 5));
// }