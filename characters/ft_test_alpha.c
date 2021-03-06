/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_alpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 18:15:14 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:39:54 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_test_alpha(t_string s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isalpha(s[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}
