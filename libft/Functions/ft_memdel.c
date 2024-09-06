/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:01:12 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 14:45:12 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
	
}

// int	main()
// {
// 	char *str;
// 	int i = 0;
// 	str = ft_memalloc(15);
// 	for (i = 0; i < 14; i++)
// 		str[i] = 'a';
// 	str[i] = '\0';
// 	puts(str);
// 	ft_memdel((void **)&str);
// 	printf("is there something left? %s\n", (str != NULL ? str : "No"));
// }