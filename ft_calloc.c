/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:52:00 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/17 16:16:08 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*my_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

void		*ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		p = NULL;
	else
		p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	my_memset(p, '\0', nmemb * size);
	return (p);
}
