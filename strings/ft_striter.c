/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 17:21:28 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:31:50 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striter(t_string s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(&s[i]);
			i++;
		}
	}
}
