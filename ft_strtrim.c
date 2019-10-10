/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:02:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/10 11:13:10 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isfromstr(char const *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	length(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (!(str = malloc(length(s1) + 1)))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	i = 0;
	while (isfromstr(set, str[0]))
		str++;
	len = length(str);
	while (isfromstr(set, str[len - 1]))
	{
		str[len - 1] = '\0';
		len--;
	}
	return (str);
}
