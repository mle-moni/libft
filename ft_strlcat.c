/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:23:05 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/15 15:10:48 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_len(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = str_len(src);
	while (dst[i] && i < size)
		i++;
	if (!dst[i] && i < size)
	{
		while (src[j] && j + i < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + k);
}
