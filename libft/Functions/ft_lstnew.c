/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:02:30 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/09 00:39:08 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(*item));
	if (!item)
		return (NULL);
	if (!content)
	{
		item->content = NULL;
		item->content_size = 0;
	}
	if (content)
	{
		item->content = malloc(content_size);
		if (!item->content)
			return (NULL);
		ft_memcpy(item->content, content, content_size);
		item->content_size = content_size;
	}
	item->next = NULL;
	return (item);
}

// int	main()
// {
// 	t_list	*item;
// 	int	ptr;

// 	ptr =  42;
// 	item = ft_lstnew(&ptr, sizeof(int));
// 	// puts(item->content);
// 	printf("%d\n", *(int *)item->content);
// 	printf("%zu\n", item->content_size);
// 	free(item);
// }