/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 13:26:49 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:22:34 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		if (*ap != NULL)
		{
			free(*ap);
			*ap = NULL;
		}
	}
}