/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 16:32:31 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/05 17:24:48 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	except_whitespc(char const *s)
{
	unsigned int	i;
    unsigned int	len;	
	
	if (!s)
		return (0);
	len = ft_strlen(s);
	while (s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
	{
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s)
{
	char	*new;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
	{
		s++;
	}
	j = except_whitespc(s);
	while (i < j)
	{
		new[i] = *s;
		i++;
		s++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(int argc, char *argv[])
// {
// 	(void) argc;
// 	char *str = ft_strtrim(argv[1]);
// 	puts(str);
// 	free(str);
// 	return (0);
// }