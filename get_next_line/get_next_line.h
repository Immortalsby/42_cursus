/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:37:42 by bshi              #+#    #+#             */
/*   Updated: 2019/10/21 18:28:59 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# define FD 5120

int		get_next_line(int fd, char **line);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *s1, const char *s2);
void	ft_bzero(void *s, size_t n);
char	*ft_strnew(size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(char *s);

#endif
