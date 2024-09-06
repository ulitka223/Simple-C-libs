/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 06:08:20 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/25 07:41:49 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*v;

	v = (unsigned char *)ptr;
	while (num > 0)
	{
		*v = (unsigned char)value;
		v++;
		num--;
	}
	return (ptr);
}

// int	main()
// {
// 	char str[] = "ooooool!";
// 	memset(str, '\n', 6);
// 	printf("%s\n", str);
// }