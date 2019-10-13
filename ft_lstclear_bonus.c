/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:58:12 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/13 13:43:11 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *last;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		last = *lst;
		*lst = (*lst)->next;
		del(last->content);
		free(last);
	}
	*lst = NULL;
}
