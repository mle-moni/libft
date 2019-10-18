/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:58:12 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/17 16:48:44 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *last;

	if (!lst)
		return ;
	while (*lst)
	{
		last = *lst;
		*lst = (*lst)->next;
		if (del)
			del(last->content);
		free(last);
	}
	*lst = NULL;
}
