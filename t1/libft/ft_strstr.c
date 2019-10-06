/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:06:48 by bshi              #+#    #+#             */
/*   Updated: 2019/10/05 22:23:01 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 在str里面找c，找到之后打印str中包含c之后的部分 */

#include "libft.h"

char	*ft_strstr(const char *str, const char *c)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (c[len] != '\0') /* 计算c的长度 */
		len++;
	if (len == 0)
		return ((char *)str); /* 如果c长度为0就返回str */
	while (str[i])
	{
		while (c[pos] == str[i + pos]) /* 当c中的字符在str中时 */
		{
			if (pos == len - 1) /* 如果成功读取到c的最后一位，即全部吻合，返回str的那个部分 */
				return ((char *)str + i);
			pos++; /* 读下一位 */
		}
		pos = 0; /* 重置位数，再搜索 */
		i++; 
	}
	return (NULL);
}
