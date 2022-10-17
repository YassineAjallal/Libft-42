/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:56:15 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:11:12 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	int		i;
	size_t	len_n;

	str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (str);
	if (len == 0)
		return (NULL);
	len_n = ft_strlen(needle);
	while (*str && i + len_n <= len)
	{
		if (ft_strncmp(str, needle, len_n) == 0)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
