/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:12:53 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/09 15:29:29 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_count(long int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	reverse_str(char *str)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = 0;
	tmp = 0;
	while (str[len])
		len++;
	len--;
	while (i <= len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
		i++;
	}
}

char		*ft_itoa(int n)
{
	char		*str;
	long int	num;
	int			i;

	i = 0;
	num = (long int)n;
	str = malloc((char_count(num) + 1) * sizeof(char));
	if (num < 0)
		num = -num;
	while (num > 9)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	str[i++] = (num % 10) + '0';
	if (n < 0)
		str[i++] = '-';
	str[i] = '\0';
	reverse_str(str);
	return (str);
}
