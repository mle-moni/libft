/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:02:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/09 11:51:26 by mle-moni         ###   ########.fr       */
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

static int	my_count(char const *s1, char const *set)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (s1[i])
	{
		if (!isfromstr(set, s1[i]))
			c++;
		i++;
	}
	return (c);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	char	*str;
	int		i;
	int		str_i;

	i = 0;
	str_i = 0;
	count = my_count(s1, set);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		if (!isfromstr(set, s1[i]))
		{
			str[str_i] = s1[i];
			str_i++;
		}
		i++;
	}
	str[str_i] = '\0';
	return (str);
}
