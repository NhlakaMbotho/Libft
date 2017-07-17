/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 12:46:53 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:23:14 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	int	i;
	char*new_dest;

	new_dest = (t_string)dest;
	i = 0;
	while (i < (int)count)
	{
		new_dest[i] = ch;
		i++;
	}
	return (new_dest);
}
