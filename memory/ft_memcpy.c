/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 16:13:35 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:22:20 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	i;
	char*dest;
	char*source;

	i = 0;
	dest = (t_string)dst;
	source = (t_string)src;
	while (i < (int)n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
