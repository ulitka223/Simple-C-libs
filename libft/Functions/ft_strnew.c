/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:18:00 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/01 14:37:42 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)malloc(size + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

// int	main()
// {
// 	char *bebra = ft_strnew(4);
// 	puts(bebra != NULL ? bebra : "no");
// 	if (bebra[0] == '\0' && bebra[4] == '\0')
// 		puts("Hihihi");
// }