/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:09:36 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/29 02:09:33 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return dest;
}

int	main(int argc, char *argv[])
{
	char *new = ft_strdup(argv[1]);
	printf("%s\n", new);
	free(new);
}