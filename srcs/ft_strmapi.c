/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:44:29 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/08 12:06:02 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_total;
	char			c_backup;

	str_total = NULL;
	i = 0;
	while (s[i])
		i++;
	str_total = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		c_backup = f(i, s[i]);
		str_total[i] = c_backup;
		i++;
	}
	str_total[i] = '\0';
	return (str_total);
}
