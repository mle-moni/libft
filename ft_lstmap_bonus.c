/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:05:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/13 14:02:35 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*my_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->content = content;
	return (new);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void*))
{
	t_list *new_lst;
	t_list *next_item;

	if (!lst || !f)
		return (NULL);
	new_lst = my_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	next_item = new_lst;
	lst = lst->next;
	while (lst)
	{
		next_item->next = my_lstnew(f(lst->content));
		if (!(next_item->next))
			return (NULL);
		lst = lst->next;
		next_item = next_item->next;
	}
	return (new_lst);
}
