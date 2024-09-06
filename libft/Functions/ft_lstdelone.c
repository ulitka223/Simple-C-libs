/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:40:05 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/10 15:45:59 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !del)
		return ;
	(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}

// void	delete(void *content, size_t content_size)
// {
// 	free(content);
// }

// int	main()
// {
// 	t_list *item1;

// 	item1 = ft_lstnew("Kupil muz shlyape", 18);
// 	puts(item1->content);
// 	ft_lstdelone(&item1, delete);
// 	puts((item1 == NULL) ? "yes" : "No");
// }