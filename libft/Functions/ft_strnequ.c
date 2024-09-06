/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 13:07:34 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/04 13:23:42 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (!(ft_strncmp(s1, s2, n)))
		return (1);
	else 
		return (0);
}

// int	main()
// {
// 	char str1[] = "Bib";
// 	char str2[] = "Bibaj";
// 	if (ft_strnequ(str1, str2, 3) == 1)
// 		puts("equal");
// 	else 
// 		puts("not equal");
// }