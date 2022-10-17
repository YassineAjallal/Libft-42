/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:23:34 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:10:23 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	s;
	char			*str;

	i = 0;
	s = (unsigned char)c;
	str = (char *)b;
	while (i < len)
	{
		str[i] = s;
		i++;
	}
	return (str);
}
