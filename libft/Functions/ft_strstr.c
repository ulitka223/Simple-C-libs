/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:24:54 by dekravts          #+#    #+#             */
/*   Updated: 2024/04/26 14:47:40 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str2[j] == '\0')
		return (char *)(str1);
	while(str1[i])
	{
		if(str1[i + j] == str2[j])
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
// 	char full[] = "Ya riba a wi kto takoy";
// 	//char *to_find = "wi";
// 	char *pch;
// 	pch = ft_strstr(full, "");
// 	if (pch != NULL)
// 		ft_strncpy(pch, "on", 2);
// 	printf("%s\n", pch != NULL ? full : "Nothing was found");
// }