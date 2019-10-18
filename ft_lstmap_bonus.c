/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:05:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/17 16:50:55 by mle-moni         ###   ########.fr       */
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

static t_list	*abort_the_mission(t_list **lst, void (*del)(void *))
{
	t_list *last;

	if (!lst)
		return (NULL);
	while (*lst)
	{
		last = *lst;
		*lst = (*lst)->next;
		if (del)
			del(last->content);
		free(last);
	}
	*lst = NULL;
	return (*lst);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void*),
void (*del)(void *))
{
	t_list *new_lst;
	t_list *next_item;

	if (!lst || !f)
		return (NULL);
	new_lst = my_lstnew(f(lst->content));
	if (!new_lst)
		return (abort_the_mission(&new_lst, del));
	next_item = new_lst;
	lst = lst->next;
	while (lst)
	{
		next_item->next = my_lstnew(f(lst->content));
		if (!(next_item->next))
			return (abort_the_mission(&new_lst, del));
		lst = lst->next;
		next_item = next_item->next;
	}
	return (new_lst);
}
