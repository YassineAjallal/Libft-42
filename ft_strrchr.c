/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:56:39 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:16:44 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)s;
	str = str + len - 1;
	if ((unsigned char)c == '\0')
		return (str + 1);
	while (str != s - 1)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return (str);
		str--;
	}
	return (NULL);
}
