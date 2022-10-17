/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal < yajallal@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:58:19 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/17 00:10:35 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	d;

	d = n;
	if (d < 0)
	{
		ft_putchar_fd('-', fd);
		d = -d;
	}
	if (d > 9)
	{
		ft_putnbr_fd(d / 10, fd);
		ft_putchar_fd((d % 10) + '0', fd);
	}
	else
		ft_putchar_fd(d + '0', fd);
}
