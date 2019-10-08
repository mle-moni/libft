/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:10:11 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 16:27:14 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	n--;
	while (1)
	{
		((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
		n--;
		if (n == 0)
			return (dest);
	}
}
