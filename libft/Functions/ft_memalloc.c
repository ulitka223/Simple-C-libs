/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 05:46:34 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 14:16:30 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memalloc(size_t size)
{
	void*	buffer;
	
	buffer = (void *)malloc(size * sizeof(void *));
	if (!buffer)
		return (NULL);
    ft_bzero(buffer, size);
	return (buffer);
}

// int	main()
// {
// 	int *arr;
// 	arr = ft_memalloc(5);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d\n",arr[i]);
// 	}
// 	free(arr);
// }