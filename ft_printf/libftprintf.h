/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:46:20 by dekravts          #+#    #+#             */
/*   Updated: 2024/06/10 03:39:08 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H

# define LIBFT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_parse(char c, va_list args);
int	ft_strlen(char const *str);
int	count_l(unsigned long long a);
int	ft_print_hex(unsigned long long a);
int	ft_pointer(void *ptr);
int	ft_printf(const char *str, ...);

#endif
