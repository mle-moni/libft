/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:04:44 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/09 14:38:23 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' ||
	c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

static int	my_isnum(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	int			i;
	long long	res;
	int			sign;

	sign = 1;
	res = 0;
	i = 0;
	while (my_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (my_isnum(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
