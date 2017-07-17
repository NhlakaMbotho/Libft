/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 12:12:50 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:26:15 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr(int n)
{
	int		sign;
	char	num;

	sign = 1;
	num = '0';
	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n < 0)
	{
		sign *= -1;
		write(1, "-", 1);
	}
	n *= sign;
	if (n < 10)
	{
		num = n + '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
