/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmbotho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 16:42:52 by nmbotho           #+#    #+#             */
/*   Updated: 2017/06/25 10:21:13 by nmbotho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char*dest;
	char*source;
	int i;

	dest = (t_string)dst;
	source = (t_string)src;
	i = 0;
	while (i < (int)n)
	{
		dest[i] = source[i];
		if (dest[i] == c)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
