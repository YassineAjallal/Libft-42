/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:38:00 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:10:57 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (!dst || !src)
		return (0);
	if (len_d >= dstsize)
		return (len_s + dstsize);
	while (src[i] && len_d + i < dstsize - 1)
	{
		dst[i + len_d] = src[i];
		i++;
	}
	dst[i + len_d] = '\0';
	return (len_s + len_d);
}
