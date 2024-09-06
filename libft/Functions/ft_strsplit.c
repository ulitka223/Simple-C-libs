/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:36 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/16 04:04:18 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(char v, char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (v == c[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_len(char const *s, char *c)
{
	int	j;

	j = 0;
	while (s[j] != '\0' && is_sep(s[j], c) == 0)
	{
		j++;
	}
	return (j);
}

size_t	word_count(char const *s, char *c)
{
	size_t	count;
	int	i;
	
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != '\0' && is_sep(s[i], c) == 1)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && is_sep(s[i], c) == 0)
			i++;
	}
	return (count);
}

char *verni_slovo(char const *s, char *c)
{
	char	*slovo;
	int	i;
	int	len;

	i = 0;
	len = word_len(s, c);
	slovo = (char *)malloc(sizeof(char) * len);
	if (!slovo)
		return (NULL);
	while (i < len)
	{
		slovo[i] = s[i];
		i++;
	}
	slovo[i] = '\0';
	return (slovo);
}

char	**ft_strsplit(char const *s, char *c)
{
	char	**array;
	int	i;
	size_t count = word_count(s,c);

	i = 0;
	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	while (i < count)
	{
		while (*s && is_sep(*s,c) == 1)
		{
			s++;
		}
		if (*s != '\0')
		{
			array[i] = verni_slovo(s, c);
			i++;
		}
		while (*s && is_sep(*s, c) == 0)
		{
			s++;
		}
	}
	array[i] = 0;
	return (array);
}

// int	main()
// {
// 	char *str = "He lo,i,waited,so,long,";
// 	char *c = ", ";
// 	char **arr;
// 	int count = 0;

// 	count = word_count(str,c);
// 	arr = ft_strsplit(str, c);
// 	for (int i = 0; i < count; i++)
// 	{
// 		puts(arr[i]);
// 	}
// 	free(arr);
// }