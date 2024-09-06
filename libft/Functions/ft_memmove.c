/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:34:18 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/03 20:32:11 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char 	*d;
	unsigned char	*s;
	
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		d = d + num;
		s = s + num;
		while (num > 0)
		{
			*d = *s;
			d--;
			s--;
			num--;
		}
	}
	else
	{
		while (num > 0)
		{
			*d = *s;
			d++;
			s++;
			num--;
		}
	}
	return (dest);
}

int	main()
{
	char	src[] = "1 year, 0 days, 5 hours, 15 minutes and 3 seconds";
	ft_memmove(src + 9, src + 16, 10);
	puts(src);
}