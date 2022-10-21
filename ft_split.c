/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:30:53 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 21:58:36 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_nbword(char *s, char c)
{
	int		i;
	size_t	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			nb++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nb);
}

static	size_t	ft_len(char *s, char c, int p)
{
	size_t	len;

	len = 0;
	while (s[p] != c && s[p] != '\0')
	{
		len++;
		p++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	str = (char **)malloc((ft_nbword((char *)s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			str[j] = ft_substr(s, i, ft_len((char *)s, c, i));
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	str[j] = NULL;
	return (str);
}
