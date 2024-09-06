/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:40:56 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/27 14:33:24 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return (char *)(str);
		str++;
	}
	return (NULL);
}

// int	main()
// {
// 	char	*str = "HBello";
// 	char *res = ft_strchr(str, 66);
// 	puts(res);
// }