/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:47:00 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/14 04:07:57 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *nex;
	
	nex = *alst;
	*alst = new;
	(*alst)->next = nex;
}

// int	main()
// {
// 	t_list **all;
// 	t_list *item;
// 	t_list *item1;

// 	all = (t_list **)malloc(sizeof(t_list *) * 4);
// 	item = ft_lstnew("Hello", 5);
// 	item1 = ft_lstnew("Drown",5);
// 	// for (int i = 0; i < 3; i++)
// 	// {
// 	// 	all[i] = item;
// 	// 	item->next = ft_lstnew("Drown", 5);
// 	// 	puts((char *)all[i]->next->content);
// 	// }
// 	all[0] = item;
// 	item->next = ft_lstnew("Bob", 3);
// 	all[1] = item->next;
// 	item->next->next = ft_lstnew("Ross",4);
// 	all[2] = item->next->next;
// 	ft_lstadd(all, item1);
// 	puts((char *)all[0]->content);
// 	puts((char *)all[0]->next->content);
// 	puts((char *)all[0]->next->next->content);
// 	puts((char *)all[1]->next->content);
// 	free(all);
// }