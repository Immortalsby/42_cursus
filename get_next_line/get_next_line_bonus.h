/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 23:37:42 by bshi              #+#    #+#             */
/*   Updated: 2019/10/18 18:11:14 by bshi             ###   ########.fr       */
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
char	*ft_substr(const char *s, unsigned int start, size_t len);
size_t	ft_strlen_sc(const char *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
