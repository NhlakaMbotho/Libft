/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 13:42:09 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:26:30 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		sign;
	char	num;

	sign = 1;
	num = '0';
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0)
	{
		sign *= -1;
		write(fd, "-", 1);
	}
	n *= sign;
	if (n < 10)
	{
		num = n + '0';
		write(fd, &num, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
