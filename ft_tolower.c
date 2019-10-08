/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:34:42 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/07 14:19:42 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (c + ('a' - 'A'));
	return (c);
}