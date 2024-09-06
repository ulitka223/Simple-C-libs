/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:42:53 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 14:48:03 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
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
// 	ft_strdel(&str);
// 	printf("is there something left? %s\n", (str != NULL ? str : "No"));
// }