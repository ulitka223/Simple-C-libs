/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 04:09:02 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/14 04:31:18 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	 if (lst)
	{
		while (lst != NULL)
	 	{
			(*f)(lst);
			lst = lst->next;
	 	}
	}
}

void fonc(t_list *elem)
{
	elem->content = "50 cent";
}

// int	main()
// {
// 	t_list *item;

// 	item = ft_lstnew("Kogo",2);
// 	item->next = ft_lstnew("Sebya",3);
// 	puts((char *)item->content);
// 	printf("%zu\n",(size_t)item->content_size);
// 	ft_lstiter(item, fonc);
// 	puts(item->content);
// 	puts(item->next->content);
// }