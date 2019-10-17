/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:33:13 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/17 14:52:26 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int		is_same(const char *start, const char *str, size_t len)
{
	size_t i;

	i = 0;
	while (start[i] && str[i] && (start[i] == str[i]) && i < len)
	{
		i++;
	}
	if (length(str) == i)
		return (1);
	return (0);
}

char			*ft_strnstr(const char *haystack,
const char *needle, size_t len)
{
	size_t	i;
	int		find_index;

	i = 0;
	find_index = 0;
	if (length(needle) == 0)
	{
		return ((char*)haystack);
	}
	while (i < len && haystack[i])
	{
		if (is_same(haystack + i, needle, len - i))
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
