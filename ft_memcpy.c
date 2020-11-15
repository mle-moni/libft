/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:37:36 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/13 12:13:30 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*dest_assign;

	if (!dest && !src)
		return (NULL);
	dest_assign = dest;
	i = 0;
	while (i < (int)n)
	{
		dest_assign[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dest);
}
