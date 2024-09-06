/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 04:31:41 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/14 05:12:22 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*bob;

	if (!lst || !f)
		return (NULL);
	new_list = f(lst);
	bob = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(new_list->next = f(lst)))
		{
			free(new_list->next);
			return (NULL);
		}
		else 
			new_list = new_list->next;
	}
	return (bob);
}

t_list	*chto(t_list *elem)
{
	elem->content = "khm khm";
	return (elem);
}

// int	main()
// {
// 	t_list *item1;
// 	t_list *novosti;
// 	item1 = ft_lstnew("Hello",5);
// 	item1->next = ft_lstnew("ogo",3);
// 	novosti = ft_lstmap(item1, chto);
// 	puts((char *)novosti->content);
// 	puts ((char *)novosti->next->content);
// 	// free(item1);
// 	free(novosti);
// }