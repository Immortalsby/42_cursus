/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 11:53:20 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 16:41:11 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *desc, const void *src, size_t size);
void		*ft_memccpy(void *desc, const void *src, int c, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t num);
void		*ft_memchr(const void *block, int c, size_t size);
int			ft_memcmp(const void *a1, const void *a2, size_t size);
size_t		ft_strlen(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
char 		*ft_strnstr(const char *str, const char *c, size_t n);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t eltsize);
char	 	*ft_strdup(const char *s);

#endif
