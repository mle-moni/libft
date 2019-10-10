/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:10:11 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/10 10:57:38 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char*)dest;
	s = (char*)src;
	if (s == d)
		return (d);
	if (s > d)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (n--)
			d[n] = s[n];
	return (d);
}
