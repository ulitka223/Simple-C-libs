/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 09:06:21 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/25 10:05:25 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void* src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (num > 0)
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
// 	long arr1[20];
// 	long arr2[] = {1, 2, 10, 4, 10, 11, 12, -2147483649, 156};
// 	ft_memcpy(arr1, arr2, sizeof(arr2));
// 	for (int i = 0; i < 9; i++)
// 	{
// 		printf("%ld,", arr1[i]);
// 	}
// }