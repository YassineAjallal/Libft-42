/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:44:32 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:28:49 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nb_digits(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10 != 0 && (n > 9 || n < -9))
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				digits;
	char			*str;
	long long int	d;
	int				signe;

	digits = ft_nb_digits(n);
	d = (long long int)n;
	signe = 0;
	str = (char *)malloc(digits + 1);
	if (!str)
		return (NULL);
	if (d < 0)
	{
		str[0] = '-';
		signe++;
		d = -d;
	}
	while (digits > signe)
	{
		str[digits - 1] = (d % 10) + '0';
		d = d / 10;
		digits--;
	}
	str[ft_nb_digits(n)] = '\0';
	return (str);
}
