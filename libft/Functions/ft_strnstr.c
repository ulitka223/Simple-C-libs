/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:31 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/26 14:48:03 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str2[j] == '\0')
		return (char *)(str1);
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i + j] == str2[j])
		{
			j++;
			if (str2[j] == '\0')
				return (char *)(str1 + i);
		}
		else 
			i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char *str1 = "BibaAndBoba";
// 	char *str2 = "And";
// 	puts(ft_strnstr(str1, str2, 4) != NULL ? ft_strnstr(str1, str2, 6) : "Nothing was found");
// }