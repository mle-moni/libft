/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:05:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/11 11:00:16 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(void*))
{
	t_list *new_lst;
	t_list *next_item;

	new_lst = f(lst);
	next_item = new_lst;
	if (!lst)
		return (new_lst);
	lst = lst->next;
	while (lst)
	{
		next_item->next = f(lst);
		lst = lst->next;
		next_item = next_item->next;
	}
	return (new_lst);
}
