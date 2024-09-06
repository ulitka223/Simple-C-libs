/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:42:50 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/04 13:05:40 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	if (!(ft_strcmp(s1, s2)))
		return (1);
	else 
		return (0);
}

// int	main(int argc, char **argv)
// {
// 	if ((ft_strequ(argv[1], argv[2])))
// 		puts("da");
// 	else
// 		puts("net");
// }