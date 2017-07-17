/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 08:46:25 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:10:11 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static	int		ft_clear(t_string str, int pos)
{
	if (str[pos] == '\e' || (str[pos] == '-' && !ft_isdigit(str[pos + 1])))
		return (TRUE);
	return (FALSE);
}

static	int		ft_last_number(int start, t_string str)
{
	int		i;

	i = start;
	while (ft_isdigit(str[i]) && str[i])
		i++;
	return (i - 1);
}

static	int		ft_first_number(t_string str)
{
	int		i;

	i = 0;
	while (!ft_isdigit(str[i]) && str[i])
		i++;
	return (i);
}

static	int		ft_tonumber(char c)
{
	char	*number;
	int		i;

	i = 0;
	number = "0123456789";
	while (number[i])
	{
		if (number[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int				ft_atoi(const t_string str)
{
	int		l;
	int		t;
	long	num;
	int		f;

	if (ft_test_alpha(str) == 1)
		return (0);
	f = ft_first_number(str);
	l = ft_last_number(f, str);
	if (((l - f) + 1) >= 10)
		if (ft_int_max_min(str, str[f - 1], f, l) < 1)
			return (ft_int_max_min(str, str[f - 1], f, l));
	t = 1;
	num = 0;
	while (l >= 0)
	{
		num += (ft_tonumber(str[l]) * t);
		if (ft_clear(str, l))
			return (0);
		t *= 10;
		l--;
	}
	if (str[f - 1] == '-')
		return (num * -1);
	return (num);
}
