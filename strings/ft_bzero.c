/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 15:36:11 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:10:32 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;
	char*str;

	str = (t_string)s;
	i = 0;
	while (i < (int)n)
	{
		str[i] = '\0';
		i++;
	}
}
