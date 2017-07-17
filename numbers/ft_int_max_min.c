/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_max_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:03:47 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:11:16 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_int_max_min(char *str, char sign, size_t start, size_t end)
{
	char *number;

	number = ft_strcrop(str, start, end);
	if (number)
	{
		if (sign == '-')
		{
			if (ft_strcmp(number, STR_INT_MIN) > 0)
				return (0);
		}
		else if (sign != '-')
		{
			if (ft_strcmp(number, STR_INT_MAX) > 0)
				return (-1);
		}
		return (1);
	}
	return (1);
}
