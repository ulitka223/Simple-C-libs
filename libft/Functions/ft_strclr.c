/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:48:41 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 14:52:15 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	ft_bzero(s, ft_strlen(s));
}

// int	main(int argc, char **argv)
// {
// 	printf("Do you see the difference ?\n");
// 	puts(argv[1]);
// 	ft_strclr(argv[1]);
// 	puts(argv[1]);
// }