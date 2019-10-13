/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:46:15 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/13 12:59:00 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last_item;

	last_item = *alst;
	if (!last_item)
		*alst = new;
	else
	{
		while (last_item->next)
			last_item = last_item->next;
		last_item->next = new;
	}
}
