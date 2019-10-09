/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:47:27 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/09 16:22:06 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	int				diff;
	const char		*s1_2 = s1;
	const char		*s2_2 = s2;

	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = (unsigned char)(s1_2[i]) - (unsigned char)(s2_2[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
