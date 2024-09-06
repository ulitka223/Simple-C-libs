/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekravts <moonriver7609@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 04:28:53 by dekravts          #+#    #+#             */
/*   Updated: 2024/05/16 04:03:58 by dekravts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct 		s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
}					t_list;

int		ft_isdigit(int c);
int		ft_isalpha(int c);
void	ft_putchar(char c);
int		ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *c);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t n);
char	*ft_strstr(const char *str1, const char *str2);
char	*ft_strcat(char *dest, const char *src);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int		ft_atoi(char *str);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memcpy(void *dest, const void* src, size_t num);
int		ft_tolower(int c);
void	ft_putchar(char c);
char	*ft_strnew(size_t size);
int		ft_isalnum(int c);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strdup(char const *src);
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
char	**ft_strsplit(char const *s, char *c);
#endif
