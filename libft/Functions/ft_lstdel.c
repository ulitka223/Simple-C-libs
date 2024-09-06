/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:28:34 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/14 04:44:15 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*item;
	
	item = *alst;
	while (item != NULL)
	{
		t_list *next = item->next;
		ft_lstdelone(&item, del);
		item = next;
	}
	*alst = NULL;
}

void	del(void *cont, size_t size)
{
	free(cont);
}

// int	main()
// {
// 	t_list *item1;
// 	t_list **all;

// 	all = (t_list **)malloc(3 * sizeof(t_list *));
// 	item1 = ft_lstnew("Bob", 3);
// 	all[0] = item1;
// 	item1->next = ft_lstnew("Ross",4);
// 	all[1] = item1->next;
// 	item1->next = ft_lstnew("Hello",5);
// 	all[2] = item1->next;
	
// 	puts(item1->content);
// 	for (int i = 0; i < 3; i++)
// 		printf("Eto kak rabotaet voobshe? %s\n", (char *)all[i]->content);
// 	puts((char *)all[0]->next->content);
// 	puts((char *)item1->next->content);
// 	ft_lstdel(all, del);
// 	if (all[0] == NULL)
// 		puts("kruto");
// 	free(all);
// }