/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 10:29:35 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:14:29 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	char	*ft_positive_num(int n)
{
	int		temp;
	int		size;
	char	*num;

	temp = n;
	size = 1;
	num = NULL;
	while ((temp /= 10) > 0)
		size++;
	num = ft_strnew(size);
	if (!num)
		return (NULL);
	while (--size >= 0)
	{
		num[size] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

static	char	*ft_negative_num(int n)
{
	int		temp;
	size_t	size;
	char	*num;

	temp = n;
	size = 1;
	num = NULL;
	while ((temp /= 10) > 0)
		size++;
	num = ft_strnew(size + 1);
	if (!num)
		return (NULL);
	num[0] = '-';
	while (size > 0)
	{
		num[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	return (num);
}

char			*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		return (ft_negative_num(n * -1));
	return (ft_positive_num(n));
}
