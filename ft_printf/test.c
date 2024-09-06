/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 00:07:30 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/10 03:18:56 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
void hueta(int n, ...)
{
	// printf("%d\n",n);
	va_list j;
	va_start(j, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d\n",va_arg(j, int));
	}
	va_end(j);
	
}

// int	main()
// {
// 	hueta(3,4,5,4);
// }