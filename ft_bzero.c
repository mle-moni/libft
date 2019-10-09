/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:25:12 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/08 14:08:31 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_assign;
	int				i;

	i = 0;
	s_assign = s;
	while ((size_t)i < n)
	{
		s_assign[i] = '\0';
		i++;
	}
}
