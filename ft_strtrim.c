/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:02:37 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/13 12:28:07 by mle-moni         ###   ########.fr       */
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
	char	*final;
	int		len;

	i = 0;
	str = (char*)s1;
	while (isfromstr(set, str[0]))
		str++;
	len = length(str);
	while (len != 0 && isfromstr(set, str[len - 1]))
		len--;
	if (!(final = malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		final[i] = str[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}
