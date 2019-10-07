/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:37:36 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 11:52:54 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		tmp;
	int		i;
	char	*dest_assign;

	dest_assign = dest;
	i = 0;
	tmp = 0;
	while (i < (int)n)
	{
		dest_assign[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
