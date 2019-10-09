/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:23:05 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/09 13:51:34 by mle-moni         ###   ########.fr       */
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

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;
	size_t j;

	j = 0;
	len = str_len(dst);
	i = len;
	if (dstsize < len)
		return (str_len(src) + dstsize);
	while (j + 1 < dstsize - len && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len + str_len(src));
}
