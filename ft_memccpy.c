/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:52:22 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 16:27:14 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int		tmp;
	int		i;
	char	*dest_assign;

	dest_assign = dest;
	i = 0;
	tmp = 0;
	while (i < (int)n)
	{
		dest_assign[i] = ((unsigned char*)src)[i];
		if ((int)((unsigned char*)src)[i] == c)
		{
			return (((void*)src) + i + 1);
		}
		i++;
	}
	return (NULL);
}
