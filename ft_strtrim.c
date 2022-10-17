/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:36:57 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:11:39 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	char	*tmp;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	tmp = (char *)set;
	if (!set || !s1)
		return (NULL);
	while (s1[i] && ft_strchr(tmp, s1[i]))
	{
		tmp = (char *)set;
		i++;
	}
	tmp = (char *)set;
	while (len > 0 && ft_strchr(tmp, s1[len - 1]))
	{
		tmp = (char *)set;
		len--;
	}
	str = ft_substr(s1, i, len - i);
	return (str);
}
