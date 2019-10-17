/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:04:25 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/17 16:13:02 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	if ((!s1 && !s2) || n == 0)
		return (0);
	diff = 0;
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		diff = (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
