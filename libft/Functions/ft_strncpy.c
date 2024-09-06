/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:29:21 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/24 09:57:33 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while(src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

// int	main(int argc, char *argv[])
// {	
// 	char *dest;
// 	dest = (char *)malloc(30 * sizeof(char));
// 	//char src[10] = "Hello,Biba";
// 	dest = ft_strncpy(dest, argv[1], 3);
// 	printf("%s\n", dest);
// }