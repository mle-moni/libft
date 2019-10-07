/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:33:13 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 15:03:09 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int find_index;

	i = 0;
	find_index = 0;
	while (i < len && haystack[i] && needle[find_index])
	{
		if (haystack[i] == needle[find_index])
		{
			find_index++;
		}
		else
		{
			find_index = 0;
		}
		i++;
	}
	if (find_index == length(needle))
		return (haystack + i - find_index);
	return (0);
}
