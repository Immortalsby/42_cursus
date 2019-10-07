/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshi <sby945913@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:25:28 by bshi              #+#    #+#             */
/*   Updated: 2019/10/07 16:40:11 by bshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strnstr函数说明，在s1的前pos1个字符串中查找s2，如果存在就返回s2在s1中的位置，如果没有找到，返回 NULL

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t n)
{
	size_t i;
	size_t pos;
	size_t len;

	i = 0;
	pos = 0;
	len = 0;
	while (c[len] != '\0') // 计算c的长度
		len++;
	if (len == 0)
		return ((char *)str); // 如果c长度为0就返回str
	while (str[i] && i <= n)
	{
		while (c[pos] == str[i + pos]) // 当c中的字符在str中时
		{
			if (pos == len - 1) // 如果成功读取到c的最后一位，即全部吻合，返回str的那个部分
				return ((char *)str + i);
			pos++; // 读下一位
		}
		pos = 0; // 重置位数，再进循环
		i++; 
	}
	return (NULL);
}

