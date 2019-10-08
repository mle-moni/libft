/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-moni <mle-moni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:16:04 by mle-moni          #+#    #+#             */
/*   Updated: 2019/10/08 12:32:43 by mle-moni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		c;
	long int	num;

	c = 0;
	num = (long int)n;
	if (num < 0)
	{
		num = -num;
		write(fd, "-", 1);
	}
	if (num > 9)
	{
		ft_putnbr_fd((int)(num / 10), fd);
		ft_putnbr_fd((int)(num % 10), fd);
	}
	else
	{
		c = num + '0';
		write(fd, &c, 1);
	}
}
