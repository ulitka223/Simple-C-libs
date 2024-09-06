/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 11:05:51 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/27 11:21:24 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int value, size_t num)
{
	unsigned char *s;
	s = (unsigned char *)src;
	while (num > 0)
	{
		if (*s == (unsigned char)value)
			return (s);
		s++;
		num--;
	}
	return (NULL);	
}

// int	main()
// {
// 	char str[] = "DeathGrips";
// 	char *f;
// 	f = (char *)ft_memchr(str, 't', 10);
// 	if (f != NULL)
// 		printf("%s\n", f);
// 	else 
// 		printf("Net");
// }