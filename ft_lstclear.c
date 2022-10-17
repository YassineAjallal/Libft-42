/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yajallal <yajallal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 22:42:29 by yajallal          #+#    #+#             */
/*   Updated: 2022/10/09 06:11:45 by yajallal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *list;
	t_list *tmp;
	list = *lst;

		while (list)
		{
			(*del)(list->content);
			tmp = list;
			free(list);
			list = tmp->next;
		}
}
