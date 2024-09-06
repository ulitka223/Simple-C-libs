/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:20:07 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/26 12:33:26 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	c1;

	c1 = (unsigned char)c;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (num > 0 && *s != c1)
	{
		*d = *s;
		d++;
		s++;
		num--;
	}
	return (dest);
}

// int	main()
// {
// 	char	dest[] = "                           ";
// 	char	src[] = "BibaIBoba";
// 	ft_memccpy(dest, src, 'I', sizeof(src));
// 	puts(dest);
// }